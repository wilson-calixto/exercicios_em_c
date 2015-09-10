float s_sort(float *vetor1,float n)
{
	int i,j;
	float temp;	
	
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(vetor1[j]>=vetor1[i])
				{
							
					temp=vetor1[i];
					vetor1[i]=vetor1[j];
					vetor1[j]=temp;
				}		
			}	
		}

		return vetor1[0];
}
