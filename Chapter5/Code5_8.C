  {
//macro tfileme.C
//Just to have data to be represented
TH1D *hist0 = new TH1D("hist0","",50,0,10);
TH1D *hist1 = new TH1D("hist1","",50,0,10);
TH1D *hist2 = new TH1D("hist2","",50,0,10);
TH1D *hist3 = new TH1D("hist3","",50,0,10);
￼
auto func = new TF1("func","gaus(0)",0,10);
func->SetParameters(100,1,0.5);
hist0->FillRandom("func",100000);
func->SetParameters(100,2,0.75);
hist1->FillRandom("func",100000);
func->SetParameters(100,3,1);
hist2->FillRandom("func",100000);
func->SetParameters(100,4,1.5);
hist3->FillRandom("func",100000);
TFile *saveme = new TFile("histos.root","recreate");
hist0->Write();
hist1->Write();
hist2->Write();
hist3->Write();
saveme->Close();
} 
