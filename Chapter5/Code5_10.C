   {
    //Class for pseudo-random numbers generator
    TRandom3 genme(0);
    float g1, g2, g3, l, u;
    TFile saveme ("data.root","recreate");
    TTree *mytree = new TTree("mytree","");
    mytree->Branch("g1",&g1,"g1/F");
    mytree->Branch("g2",&g2,"g2/F");
    mytree->Branch("g3",&g3,"g3/F");
    mytree->Branch("l",&l,"l/F");
    mytree->Branch("u",&u,"u/F");
￼
    for(int i=0;i<100000000;i++){
    g1 = genme.Gaus(0,0.5);
    g2 = genme.Gaus(1,1.5);
    g3 = genme.Gaus(2,2.5);
    l  = genme.Landau(1,1.5);
    u  = genme.Uniform();
    mytree->Fill();
    }
    mytree->Write();
    saveme.Close();
    }
