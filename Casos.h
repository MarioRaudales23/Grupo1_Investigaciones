#include <string>
#include <vector>
#include "evidencias.h"
using namespace std;
class Casos{
	private:
		int numero;
		vector<evidencias> evidencias;
		string hora;
		string fecha;
		bool cerrado;

	public:
		Casos(string,string,bool,int);
		virtual ~Casos();
		string getFecha();
		string getHora();
		bool getCerrado();
		void setFecha();
		void setHora();
		void setCerrado();
		int getNumero();
		void setNumero();
		virtual string toString()const;
		void setEvidencia(evidencias);

}