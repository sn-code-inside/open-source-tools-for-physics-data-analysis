{
//general settings
int mymarkerstyle=20;
float mymarkersize=1.;
float mytextsize=0.065;
float mytextsize1=0.055;
int mytextfont=132; //times new roman...
￼
TCanvas *Box = new TCanvas("Box","Box",600,500); //Constructor 600pt x 550 pt
gStyle->SetOptStat(0); //no Stat information
Box->SetFillColor(0);//Background color, 0 means white
Box->SetBorderMode(0);//No border
Box->SetLeftMargin(0.13); //13% of the largeness of the figure as left margin
Box->SetRightMargin(0.05);// 5% of the largeness of the figure as right margin
Box->SetTopMargin(0.07); //7% of the largeness of the figure as top margin
Box->SetBottomMargin(0.12); //12% of the largeness of the figure as bottom margin
￼
//Just to have data to be preresented
TH1D *hist = new TH1D("hist","",100,-5,5);
auto func = new TF1("func","x*gaus(0) -x*x+[3]",-5,5);
func->SetParameters(100,0,1,1000);
hist->FillRandom("func",100000000);
￼
 hist->GetYaxis()->SetTitleSize(mytextsize);
 hist->GetXaxis()->SetTitleSize(mytextsize);
 hist->GetXaxis()->SetLabelSize(mytextsize1);
 hist->GetYaxis()->SetLabelSize(mytextsize1);
 hist->GetXaxis()->SetTitleFont(mytextfont);
 hist->GetYaxis()->SetTitleFont(mytextfont);
 hist->GetXaxis()->SetLabelFont(mytextfont);
 hist->GetYaxis()->SetLabelFont(mytextfont);
 hist->GetXaxis()->SetNdivisions(108);
 hist->GetXaxis()->CenterTitle(1);
 hist->GetYaxis()->CenterTitle(1);
 hist->GetXaxis()->SetTitleOffset(0.95);
 hist->GetYaxis()->SetTitleOffset(0.98);
 hist->SetTitle("");
 hist->GetYaxis()->SetTitle("Counts");
 hist->GetXaxis()->SetTitle("Measurement (unit of measure)");
 hist->SetLineColor(4);
 hist->Draw();
￼
 Box->SaveAs("simplefigure.pdf"); 
}//end of macro
