#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include <memory>

namespace Sagittarius
{

	class SAGITTARIUS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_CoreLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define SGT_CORE_INFO(...)    ::Sagittarius::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SGT_CORE_TRACE(...)   ::Sagittarius::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SGT_CORE_WARN(...)    ::Sagittarius::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SGT_CORE_ERROR(...)   ::Sagittarius::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SGT_CORE_FATAL(...)   ::Sagittarius::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define SGT_INFO(...)         ::Sagittarius::Log::GetClientLogger()->info(__VA_ARGS__)
#define SGT_TRACE(...)        ::Sagittarius::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SGT_WARN(...)         ::Sagittarius::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SGT_ERROR(...)        ::Sagittarius::Log::GetClientLogger()->error(__VA_ARGS__)
#define SGT_FATAL(...)        ::Sagittarius::Log::GetClientLogger()->critical(__VA_ARGS__)