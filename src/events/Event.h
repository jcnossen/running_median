#pragma once

namespace tplx
{

enum class EventType
{
    new_value,
    calculate_median,
    sequence_end
};

template<typename T>
struct Event
{
    explicit Event(T value) : value{value}, type{EventType::new_value}
    {
    }
    explicit Event(EventType type, T value = {}) : value{value}, type{type}
    {
    }

    T value;
    EventType type;
};

} // namespace tplx
