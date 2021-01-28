#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream in("liczby1.txt");
	ifstream in2("liczby2.txt");
    
    int q,iter,iter_;
    int ciag[1000];
    int ciag2[1000];
    int ruz,ruz2;
    int max ,maxPos, min ,minPos ,ruzNum,ruzPos,now_;
    bool firster,ruzer = false;
	if(in.good()){
		while(!in.eof()){
	            q++;
	                
	                in >> oct >> ciag[q];
	                now_ = ciag[q];
	                if(firster == false){
	                	firster = true;
	                	min = now_;
	                	minPos = q;
					}
	                
	                if(now_ >max){
	                	max = now_;
	                	maxPos = q;
	                	
					}
					if(now_ < min){
						min = now_;
	                	minPos = q;
					}
	                
                }
            }
            in.close();
	    cout<<oct<< min<<":"<<minPos<<endl;
	    cout<<oct<< max <<":"<<maxPos<<endl;
	    q = 0;
    if(in2.good()){
		while(!in2.eof()){
			
			in2 >> dec>>ciag2[q];
			
			if(q>=1){
				ruz2 = ruz;
				ruz= ciag2[q-1]-ciag2[q];
				cout<< dec<<ruz<<",";
				if(ruz==ruz2&&q>=2){
					
					iter_++;
					if(iter_>iter){
						if(ruzer==false){
							ruzNum = ciag2[q];
							ruzer = true;
							
						}
						iter = iter_;
					}
					
				}else{
					iter_ = 0;
					ruzer = false;
				}
			}
			
			q=q+1;
		}
		
		cout<<dec  <<endl<<ruzNum<<":"<<iter;
	}
	
	return 0;
}
