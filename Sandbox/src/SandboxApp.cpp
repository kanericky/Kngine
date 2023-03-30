#include <Kngine.h>

class Sandbox : public Kngine::Application {

public: 

	Sandbox() {

	}

	~Sandbox() {

	}


};

Kngine::Application* Kngine::CreateApplication() {

	return new Sandbox();
}
