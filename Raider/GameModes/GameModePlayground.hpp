#pragma once

#include "GameModeBase.hpp"

class GameModePlayground : public AbstractGameModeBase
{
public:
    GameModePlayground()
        : GameModePlayground("FortPlaylistAthena Playlist_Playground.Playlist_Playground")
    {
    }

    GameModePlayground(std::string PlaylistName)
        : AbstractGameModeBase(PlaylistName, true, 1)
    {
        LOG_INFO("Initializing GameMode Playground!");

        auto GameMode = static_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
    }

    void OnPlayerJoined(AFortPlayerControllerAthena* Controller) override
    {
        this->Teams->AddPlayerToRandomTeam(Controller);
    }

    void InitializeGameplay()
    {
        auto GameState = static_cast<AFortGameStateAthena*>(GetWorld()->GameState);
        auto GameMode = static_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);

        auto Aircraft = GameState->GetAircraft(0);
        if (Aircraft) 

       GameState->GamePhase = EAthenaGamePhase::SafeZones;
       GameState->OnRep_GamePhase(EAthenaGamePhase::Aircraft);

       GameState->SafeZonesStartTime = 3600.0f;
    }

    /*void OnPlayerKilled(AFortPlayerControllerAthena*& Controller) override
    {
    }*/
};