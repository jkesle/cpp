#pragma once

class MapSite {
    public:
        virtual ~MapSite() = default;

        virtual auto enter() -> void = 0;
};
