#include "Light.h"

using namespace std;


// Constructeurs

Light::Light() {
	
	source = Vector();
	color = Vector();
}

Light::Light(Vector source) {
	
	this->source = source;
	color = Vector();
}

Light::Light(Vector source, Vector color) {
	
	this->source = source;
	this->color = color;
}


// Affichage console

ostream& operator<<(ostream& os, const Light& l) {
	
	os << "Light[source = " << l.source << "; color = " << l.color << "]";
	return os;
}


// Destructeur

Light::~Light() {
	
}