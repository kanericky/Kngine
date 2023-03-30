#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include <memory>

namespace Kngine {

	class KNGINE_API Log {

	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

		
	};
}


// Core log macros

#define KE_CORE_ERROR(...)		::Kngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KE_CORE_WARN(...)		::Kngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KE_CORE_INFO(...)		::Kngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KE_CORE_TRACE(...)		::Kngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KE_CORE_FATAL(...)		::Kngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros

#define KE_CLIENT_ERROR(...)	::Kngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define KE_CLIENT_WARN(...)		::Kngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KE_CLIENT_INFO(...)		::Kngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define KE_CLIENT_TRACE(...)	::Kngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KE_CLIENT_FATAL(...)	::Kngine::Log::GetClientLogger()->fatal(__VA_ARGS__)

