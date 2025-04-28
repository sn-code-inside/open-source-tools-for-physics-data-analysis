{
//we use two ifstream variables to read the data
ifstream read1("daterelli.dat");
ifstream read2("daterelli2.dat");
//we declare a vector of 6 TH1D variable addresses
TH1D *histo[6];
//we fill the just declared variables with a loop
//We use Form to dynamically create the internal labels of the histograms
//if we define two histograms with the same internal label, root gives an error!!!
for(int i = 0; i < 6; i++) {
histo[i] = new TH1D(Form("h%d", i + 1), "", 50, 0, 10);
}
//we define the maximum number of variables we need for reading
double a, b, c, d;
//we run two loops for reading the data and computing the histograms
while (read1 >> a >> b >> c >> d) {
histo[2]->Fill(a);
histo[3]->Fill(b);
histo[4]->Fill(c);
histo[5]->Fill(d);
}
while (read2 >> a >> b) {
histo[0]->Fill(a);
histo[1]->Fill(b);
}
//we close the files after use
read1.close();
read2.close();
//this is to have them all in the same box (canvas)
TCanvas *all = new TCanvas("all", "", 1200, 1000);
//we divide the box
all->Divide(2, 3);
//we run a loop to load the figures into the sectors of the box
for (int i = 0; i < 6; i++) {
//with cd we move to the sub-sectors of the box
all->cd(i + 1);
histo[i]->Draw();
}
//we save our figure to a file in pdf format (various formats are available: jpg, png, eps, ps, etc.)
all->SaveAs("allfigures.pdf");
//from this point on in the macro, the histograms have been computed and are therefore available for our analyses
}
