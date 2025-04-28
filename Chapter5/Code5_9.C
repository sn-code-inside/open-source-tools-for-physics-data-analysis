   {
    //Class for pseudo-random numbers generator
    TRandom3 genme(0);
    ofstream writeme("data.dat");
    for(int i=0;i<100000000;i++){
    writeme<<i<<"  "<<genme.Gaus(0,0.5)<<"  "<<genme.Gaus(1,1.5)<<"  "<<genme.Gaus(2,2.5)
    <<"  "<<genme.Landau(1,1.5)<<"  "<<genme.Uniform()<<endl
    }
    writeme.Close();
    }
