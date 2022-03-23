#include "MapSite.h"

#pragma once

class Wall : public MapSite {
    public:

        auto enter() -> void override;
};
