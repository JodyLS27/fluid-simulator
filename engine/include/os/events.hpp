#ifndef OS_EVENTS_H
#define OS_EVENTS_H

#include "os/event_types.hpp"

namespace liqui
{
	class Events
	{
		Events();
		~Events();

		// Update is needed as we have to update the state of the Event.
		// Weather something is pressed, Held, Released.
		void update();

		// key events
		bool pressed(event::Type key) const;
		bool held(event::Type key) const;
		bool released(event::Type key) const;

	private:
		enum Status
		{
			EVENT_NONE = 0,
			EVENT_PRESSED,
			EVENT_HELD,
			EVENT_RELEASED
		};

		// Map for the max 
		Status m_keys[EVENT_KEY_COUNT] = { EVENT_NONE };

	};
}
#endif