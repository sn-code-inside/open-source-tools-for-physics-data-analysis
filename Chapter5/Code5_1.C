{//start the root macro - c++ code
TCanvas *Box = new TCanvas("Box", "Box",600,500);
//the witness is 600 pt while the highness is 500 
Box->textgreaterSetFillColor(0); //0 means color background is white
Box->textgreaterSetBorderMode(0);
Box->textgreaterSetBorderSize(2);
Box->textgreaterSetLeftMargin(0.16);//left margin is 16% of the witness of the figure
Box->textgreaterSetRightMargin(0.08);//right margin is 8% of the figure
Box->textgreaterSetTopMargin(0.08);//top margin is 8% of the highness
Box->textgreaterSetBottomMargin(0.16);//bottom margin is the 16% 
}//end the macro
