{//Macro Complicatedfunction.C
{  //script funzione_complicata.C
  TF1 *ff=new TF1("ff","[0]*pow((sqrt(1-pow(sin(x)/[1],2))
                        -[1]*cos(x))/  (sqrt(1-pow(sin(x)/[1],2))
                        +[1]*cos(x)),2)",25*3.14/180,75*3.14/180);
  ff->SetParameter(0,2320);
  ff->SetParameter(1,1.6);
  ff->Draw();
  }//Macro end
