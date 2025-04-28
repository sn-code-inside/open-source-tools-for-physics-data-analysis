  {
Box->SetLeftMargin(0.17); //17% need more space with respect to the previous figure
Box->SetRightMargin(0.05);// 5% of the largeness of the figure as the right margin
Box->SetTopMargin(0.07); //7% of the largeness of the figure as the top margin
Box->SetBottomMargin(0.12); //12% of the largeness of the figure as the bottom margin
￼
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
￼
 hist0->GetYaxis()->SetTitleSize(mytextsize);
 hist0->GetXaxis()->SetTitleSize(mytextsize);
 hist0->GetXaxis()->SetLabelSize(mytextsize1);
 hist0->GetYaxis()->SetLabelSize(mytextsize1);
 hist0->GetXaxis()->SetTitleFont(mytextfont);
 hist0->GetYaxis()->SetTitleFont(mytextfont);
 hist0->GetXaxis()->SetLabelFont(mytextfont);
 hist0->GetYaxis()->SetLabelFont(mytextfont);
 hist0->GetXaxis()->SetNdivisions(510);
 hist0->GetXaxis()->CenterTitle(1);
 hist0->GetYaxis()->CenterTitle(1);
 hist0->GetXaxis()->SetTitleOffset(0.95);
 hist0->GetYaxis()->SetTitleOffset(1.3);//move the title
 hist0->SetTitle("");
 hist0->GetYaxis()->SetTitle("Counts");
 hist0->GetXaxis()->SetTitle("Measurement (unit of measure)");
 hist0->SetLineColor(4);
 hist0->Draw();
 hist1->SetLineColor(2);
 hist1->SetLineStyle(2);
 hist1->Draw("same");
 hist2->SetLineColor(4);
 hist2->SetMarkerColor(4);
 hist2->SetMarkerStyle(20);
 hist2->Draw("samepe");
 hist3->SetLineColor(2);
 hist3->SetMarkerColor(2);
 hist3->SetMarkerStyle(24);
 hist3->Draw("samepe");
￼
TLegend *leg = new TLegend(0.7,0.6,0.9,0.9,NULL,"brNDC");
//          ___________________o(0.9,0.9) in % of figure
//         |                   |
//         |                   |
//         |                   |
//         |                   |
//(0.7,0.6)o-------------------
￼
  leg->SetBorderSize(1);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetTextSize(mytextsize1);
  leg->SetTextFont(mytextfont);
  leg->SetFillStyle(1001);
  //how to link data and symbols
  leg->AddEntry(hist0,"Data 0","l");
  leg->AddEntry(hist1,"Data 1","l");
  leg->AddEntry(hist2,"Data 2","p");
  leg->AddEntry(hist3,"Data 3","p");
￼
  leg->Draw();
￼
 Box->SaveAs("lesssimplefigure.pdf");
} 
