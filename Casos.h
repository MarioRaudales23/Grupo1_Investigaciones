#include <string>
#include <vector>
#include "evidencias.h"
using namespace std;
class Casos{
	private:
		vector<evidencias> evidencias;
		string hora;
		string fecha;
		bool cerrado;

	public:
		Casos(string,string,bool);
		virtual ~Casos()=0;
		string getFecha();
		string getHora();
		bool getCerrado();
		void setFecha();
		void setHora();
		void setCerrado();
		void toString()=0;
		void setEvidencia(evidencias);

}