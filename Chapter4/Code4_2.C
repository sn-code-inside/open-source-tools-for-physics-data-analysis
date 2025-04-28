{//Macro function.C
{
//not-parametric functions examples
TF1 *expy = new TF1("expy","10*exp(-x/3)",0,15);
TF1 *expyneg = new TF1("expyneg","-10*exp(-x/3)",0,15);
//parametric function example
TF1 *expsin = new TF1("expsin","[0]*exp(-x/[1])*sin([2]*x)",0,15);
//method to change the values of the parameters
expsin->SetParameters(10,3,4);
expy->SetLineColor(1);
expy->SetLineWidth(2);
expyneg->SetLineColor(1);
expyneg->SetLineWidth(2);
expsin->SetLineColor(4);
￼
expsin->Draw();
expy->Draw("same");
expyneg->Draw("same");
}//Macro end
