 {
Box->SetTopMargin(0.07); //7% of the largeness of the figure as top margin
Box->SetBottomMargin(0.12); //12% of the largeness of the figure as bottom margin
￼
//Just to have data to be preresented
TH1D *hist0 = new TH1D("hist0","",50,0,10);
￼
￼
auto func = new TF1("func","gaus(0)",0,10);
func->SetParameters(100,1,0.5);
hist0->FillRandom("func",10000);
￼
TH1D *hist1 = new TH1D("hist1","",50,0,10);
func->SetParameters(100,5,1.5);
hist1->FillRandom("func",10000);
//we change the parameters to represent a differente shape
//of curve in the figure
func->SetParameters(1100,3,1);
//We use the variable object, and not the pointer
//as an exercise with this kind of variable
TGraphErrors measure("data.dat");
//operator point and not arrow to access the method!
measure.SetName("measure");
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
 func->SetLineColor(2);
 func->SetLineStyle(2);
 func->Draw("same");
 measure.SetMarkerColor(3);
 measure.SetLineColor(3);
 measure.SetMarkerStyle(22);
 measure.Draw("samep");
￼
￼
TLegend *leg = new TLegend(0.6,0.7,0.9,0.9,NULL,"brNDC");
  leg->SetBorderSize(1);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetTextSize(mytextsize1);
  leg->SetTextFont(mytextfont);
  leg->SetFillStyle(1001);
  leg->AddEntry(hist0,"histogram","l");
  leg->AddEntry(func,"function","l");
//the AddEntry method requires the memory address of the object to be linked
//with the symbol in the legend
//measure is not a pointer, that why we use the operator & to pass the memory address
//to the method
  leg->AddEntry(&measure,"measure","p");
￼
  leg->Draw();
￼
Box->SaveAs("mixlesssimplefigure.pdf");
}
