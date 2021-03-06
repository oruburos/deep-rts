//
// Created by Per-Arne on 23.02.2017.
//

#pragma once

#include "../../../cplusplus/src/Game.h"
#include "../../../cplusplus/src/unit/Unit.h"


class PyGame: public Game {
    using Game::Game;

    /*PyGame(std::string map_name): Game(map_name){

    }*/


    virtual void _render() override {
        PYBIND11_OVERLOAD(void, Game, _render, );
    }

    virtual void _caption() override {
        PYBIND11_OVERLOAD(void, Game, _caption, );
    }

    virtual void _update() override {
        PYBIND11_OVERLOAD(void, Game, _update, );
    }

    virtual void _reset() override {
        PYBIND11_OVERLOAD(void, Game, _reset, );
    }

    virtual void _onUnitCreate(Unit & unit) override {
        PYBIND11_OVERLOAD_NAME(void, Game, "_on_unit_create", _onUnitCreate, unit);
    }

    virtual void _onUnitDestroy(Unit & unit) override {
        PYBIND11_OVERLOAD_NAME(void, Game, "_on_unit_destroy", _onUnitDestroy, unit);
    }



    virtual void _onTileDeplete(Tile & tile) override {
        PYBIND11_OVERLOAD_NAME(void, Game, "_on_tile_deplete", _onTileDeplete, tile);
    }

    virtual void _onEpisodeStart() override {
        PYBIND11_OVERLOAD_NAME(void, Game, "_on_episode_start", _onEpisodeStart, );
    }

    virtual void _onEpisodeEnd() override {
        PYBIND11_OVERLOAD_NAME(void, Game, "_on_episode_end", _onEpisodeEnd, );
    }


};
