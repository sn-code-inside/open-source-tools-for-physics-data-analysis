{//Macro "MyFirstHist10.C"
//Please note that the present code works only if the file is arranged in 10 columns of real numbers!!!
TH1D *hist[10]; //array of 10 pointer to TH1D
for(int i=0; i<10; i++){
    hist[i] = new TH1D(Form("hist%d",i),"",100,0,0);
    }
ifstream reader("data10.dat");
if(reader.fail())
    {
    cout<<"the file does not exist!"<<endl;
    }
double a;
//TH1D Object array declaration
int counter =0;
while(reader>>a)
    {
        hist[counter]->Fill(a);
        counter++;
        if(counter==10) counter = 0;
    }
for(int i=0; i<10; i++){
    cout<<"the mean value of histogram "<<i+1<<" is "<<hist[i]->GetMean()<<endl;
   // cout<<"the standard deviation of histogram "<<i+1<<" is "<<hist[i]->GetRMS()<<endl;
    cout<<"     ******************       "<<endl;
}
}//Macro end
