#include<stdio.h>
#include<stdlib.h>
#include <cjson/cJSON.h>
	
void main(){
	int numbers[4]={410241396,410241397,410241398,410241399};
	char buffer[200]; 
	char *out=NULL;
	cJSON *root = cJSON_CreateObject();
	cJSON *json_array = cJSON_CreateArray();
	for(int i=0;i<4;i++){
		cJSON_AddItemToArray(json_array,cJSON_CreateNumber(numbers[i]));
	}
	cJSON_AddItemToObject(root,"key",json_array);
	out=cJSON_Print(root);
	sprintf(buffer,"%s",out);
	printf("%s\n",buffer);
	cJSON_Delete(root);
	free(out);
	return;
}

