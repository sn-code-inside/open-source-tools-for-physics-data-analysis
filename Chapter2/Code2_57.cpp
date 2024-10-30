{
    ifstream readme("disorderedfile.dat");
    float value;
    int countme=0;
    float sum =0; //initizalize to zero the sum of all data
     while(readme>>value){
        sum+=value;
        countme++;
    }
    cout<<"the average of read data is equal to "<<sum/countme<<endl;
    float average = sum/countme;
    //By reading again the file we can estimate the root mean square
    //as we did for the average or we can define an array to store 
    //the data and to avoid reading a lot of time the same file in case
    //of future analysis
    float *array = new float[countme];
    readme.close();
    readme.open("disorderedfile.dat");
    for(int i=0; i<countme; i++){
    readme>>array[i];
    }
    //now we can estimate the root main squares
￼
    sum =0; //we recicle the variable
    for(int i=0; i<countme; i++){
    sum += pow(average - array[i],2);
    }
    float rms = sqrt(sum/countme);
    cout<<"the root mean square is equal to "<<rms<<endl;
    return 0;
}
