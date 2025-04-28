{
    //we use two ifstream variables to read the data
ifstream read1("daterelli.dat");
ifstream read2("daterelli2.dat");
//we reserve 6 histograms as requested
TH1D *h1 = new TH1D("h1", "", 50, 0, 10);
TH1D *h2 = new TH1D("h2", "", 50, 0, 10);
TH1D *h3 = new TH1D("h3", "", 50, 0, 10);
TH1D *h4 = new TH1D("h4", "", 50, 0, 10);
TH1D *h5 = new TH1D("h5", "", 50, 0, 10);
TH1D *h6 = new TH1D("h6", "", 50, 0, 10);
//we define the maximum number of variables we need for reading
double a, b, c, d;
//we run two loops for reading the data and computing the histograms
while (read2 >> a >> b) {
    h1->Fill(a);
    h2->Fill(b);
}
while (read1 >> a >> b >> c >> d) {
    h3->Fill(a);
    h4->Fill(b);
    h5->Fill(c);
    h6->Fill(d);
}
//we close the files after use
read1.close();
read2.close();
￼
//this is to have them all in the same box (canvas)
TCanvas *all = new TCanvas("all", "", 1200, 1000);
//we divide the box
all->Divide(2, 3);
//with cd we move to the sub-sectors of the box
all->cd(1);
h1->Draw();
all->cd(2);
h2->Draw();
all->cd(3);
h3->Draw();
all->cd(4);
h4->Draw();
all->cd(5);
h5->Draw();
all->cd(6);
h6->Draw();
}
