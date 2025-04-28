{
 ifstream readfile("daterelli2.dat");
 // declare an array of 4 pointers to TH1D variables
TH1D *histo[4];
// use a loop to fill the just declared variables
for(int i = 0; i < 4; i++){
    histo[i] = new TH1D(Form("h%d", i + 1), "", 50, 0, 10);
}
// define the maximum number of variables needed for reading
double a, b, c, d;
// execute two loops for reading the data and computing the histograms
while(readfile >> a >> b >> c >> d)
{
    histo[0]->Fill(a);
    histo[1]->Fill(b);
    histo[2]->Fill(c);
    histo[3]->Fill(d);
}
// close the file after usage
readfile.close();

TCanvas *box = new TCanvas("box", "", 600, 500);

histo[2]->Draw();

//Use the keyword gaus directly to
//Perform a fit with a Gaussian without using a TF1
histo[0]->Fit("gaus");
box->SaveAs("fitgaus.pdf");
}
