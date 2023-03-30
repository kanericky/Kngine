#pragma once

#ifdef KE_PLATFORM_WINDOWS

extern Kngine::Application* Kngine::CreateApplication();

int main(int argc, char** argv) {

	printf("Kngine Engine Running... \n");

	Kngine::Log::Init();
	KE_CORE_WARN ("Initialize Core Log!");
	KE_CLIENT_TRACE ("Initialize Client Log!");

	auto app = Kngine::CreateApplication();
	app->Run();
	delete app;

}

#endif // KE_PLATFORM_WINDOWS
