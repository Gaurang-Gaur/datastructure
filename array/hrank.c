for(int i=0;i<a_count;i++)
{
    scanf("%d",&a[i]);
}
for (int i=0; i<b_count; i++) {
 scanf("%d",&b[i]);
}

for (int i=0; i<3 ; i++) {
if(a[i]>b[i])
{
    result_count[0]+=1;
}
else{
    result_count[1]+=1;
}


}

return result_count;
}