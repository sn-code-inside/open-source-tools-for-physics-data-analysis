{//Macro "MyFirstHist.C"
ifstream reader("data.dat");
if(reader.fail())
    {
    cout<<"the file does not exist!"<<endl;
    }
double a;
//TH1D object declaration
TH1D *hist = new TH1D("hist","",50,0,0);
while(reader>>a)
    {
    hist->Fill(a);  
    }
hist->Draw();
cout<<"the mean value of data is "<<hist->GetMean()<<endl;
cout<<"the standard deviation of data is"<<hist->GetRMS()<<endl;
}//Macro end
