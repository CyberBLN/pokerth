/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_PokerTHMessage_H_
#define	_PokerTHMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AnnounceMessage.h"
#include "InitMessage.h"
#include "AuthMessage.h"
#include "InitAckMessage.h"
#include "AvatarRequestMessage.h"
#include "AvatarReplyMessage.h"
#include "PlayerListMessage.h"
#include "GameListMessage.h"
#include "PlayerInfoRequestMessage.h"
#include "PlayerInfoReplyMessage.h"
#include "SubscriptionRequestMessage.h"
#include "JoinGameRequestMessage.h"
#include "JoinGameReplyMessage.h"
#include "GamePlayerMessage.h"
#include "KickPlayerRequestMessage.h"
#include "LeaveGameRequestMessage.h"
#include "InvitePlayerToGameMessage.h"
#include "InviteNotifyMessage.h"
#include "RejectGameInvitationMessage.h"
#include "RejectInvNotifyMessage.h"
#include "StartEventMessage.h"
#include "StartEventAckMessage.h"
#include "GameStartMessage.h"
#include "HandStartMessage.h"
#include "PlayersTurnMessage.h"
#include "MyActionRequestMessage.h"
#include "YourActionRejectedMessage.h"
#include "PlayersActionDoneMessage.h"
#include "DealFlopCardsMessage.h"
#include "DealTurnCardMessage.h"
#include "DealRiverCardMessage.h"
#include "AllInShowCardsMessage.h"
#include "EndOfHandMessage.h"
#include "ShowMyCardsRequestMessage.h"
#include "AfterHandShowCardsMessage.h"
#include "EndOfGameMessage.h"
#include "AskKickPlayerMessage.h"
#include "AskKickDeniedMessage.h"
#include "StartKickPetitionMessage.h"
#include "VoteKickRequestMessage.h"
#include "VoteKickReplyMessage.h"
#include "KickPetitionUpdateMessage.h"
#include "EndKickPetitionMessage.h"
#include "StatisticsMessage.h"
#include "ChatRequestMessage.h"
#include "ChatMessage.h"
#include "DialogMessage.h"
#include "TimeoutWarningMessage.h"
#include "ResetTimeoutMessage.h"
#include "AfkWarningMessage.h"
#include "ReportAvatarMessage.h"
#include "ReportAvatarAckMessage.h"
#include "ErrorMessage.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PokerTHMessage_PR {
	PokerTHMessage_PR_NOTHING,	/* No components present */
	PokerTHMessage_PR_announceMessage,
	PokerTHMessage_PR_initMessage,
	PokerTHMessage_PR_authMessage,
	PokerTHMessage_PR_initAckMessage,
	PokerTHMessage_PR_avatarRequestMessage,
	PokerTHMessage_PR_avatarReplyMessage,
	PokerTHMessage_PR_playerListMessage,
	PokerTHMessage_PR_gameListMessage,
	PokerTHMessage_PR_playerInfoRequestMessage,
	PokerTHMessage_PR_playerInfoReplyMessage,
	PokerTHMessage_PR_subscriptionRequestMessage,
	PokerTHMessage_PR_joinGameRequestMessage,
	PokerTHMessage_PR_joinGameReplyMessage,
	PokerTHMessage_PR_gamePlayerMessage,
	PokerTHMessage_PR_kickPlayerRequestMessage,
	PokerTHMessage_PR_leaveGameRequestMessage,
	PokerTHMessage_PR_invitePlayerToGameMessage,
	PokerTHMessage_PR_inviteNotifyMessage,
	PokerTHMessage_PR_rejectGameInvitationMessage,
	PokerTHMessage_PR_rejectInvNotifyMessage,
	PokerTHMessage_PR_startEventMessage,
	PokerTHMessage_PR_startEventAckMessage,
	PokerTHMessage_PR_gameStartMessage,
	PokerTHMessage_PR_handStartMessage,
	PokerTHMessage_PR_playersTurnMessage,
	PokerTHMessage_PR_myActionRequestMessage,
	PokerTHMessage_PR_yourActionRejectedMessage,
	PokerTHMessage_PR_playersActionDoneMessage,
	PokerTHMessage_PR_dealFlopCardsMessage,
	PokerTHMessage_PR_dealTurnCardMessage,
	PokerTHMessage_PR_dealRiverCardMessage,
	PokerTHMessage_PR_allInShowCardsMessage,
	PokerTHMessage_PR_endOfHandMessage,
	PokerTHMessage_PR_showMyCardsRequestMessage,
	PokerTHMessage_PR_afterHandShowCardsMessage,
	PokerTHMessage_PR_endOfGameMessage,
	PokerTHMessage_PR_askKickPlayerMessage,
	PokerTHMessage_PR_askKickDeniedMessage,
	PokerTHMessage_PR_startKickPetitionMessage,
	PokerTHMessage_PR_voteKickRequestMessage,
	PokerTHMessage_PR_voteKickReplyMessage,
	PokerTHMessage_PR_kickPetitionUpdateMessage,
	PokerTHMessage_PR_endKickPetitionMessage,
	PokerTHMessage_PR_statisticsMessage,
	PokerTHMessage_PR_chatRequestMessage,
	PokerTHMessage_PR_chatMessage,
	PokerTHMessage_PR_dialogMessage,
	PokerTHMessage_PR_timeoutWarningMessage,
	PokerTHMessage_PR_resetTimeoutMessage,
	PokerTHMessage_PR_afkWarningMessage,
	PokerTHMessage_PR_reportAvatarMessage,
	PokerTHMessage_PR_reportAvatarAckMessage,
	PokerTHMessage_PR_errorMessage,
	/* Extensions may appear below */
	
} PokerTHMessage_PR;

/* PokerTHMessage */
typedef struct PokerTHMessage {
	PokerTHMessage_PR present;
	union PokerTHMessage_u {
		AnnounceMessage_t	 announceMessage;
		InitMessage_t	 initMessage;
		AuthMessage_t	 authMessage;
		InitAckMessage_t	 initAckMessage;
		AvatarRequestMessage_t	 avatarRequestMessage;
		AvatarReplyMessage_t	 avatarReplyMessage;
		PlayerListMessage_t	 playerListMessage;
		GameListMessage_t	 gameListMessage;
		PlayerInfoRequestMessage_t	 playerInfoRequestMessage;
		PlayerInfoReplyMessage_t	 playerInfoReplyMessage;
		SubscriptionRequestMessage_t	 subscriptionRequestMessage;
		JoinGameRequestMessage_t	 joinGameRequestMessage;
		JoinGameReplyMessage_t	 joinGameReplyMessage;
		GamePlayerMessage_t	 gamePlayerMessage;
		KickPlayerRequestMessage_t	 kickPlayerRequestMessage;
		LeaveGameRequestMessage_t	 leaveGameRequestMessage;
		InvitePlayerToGameMessage_t	 invitePlayerToGameMessage;
		InviteNotifyMessage_t	 inviteNotifyMessage;
		RejectGameInvitationMessage_t	 rejectGameInvitationMessage;
		RejectInvNotifyMessage_t	 rejectInvNotifyMessage;
		StartEventMessage_t	 startEventMessage;
		StartEventAckMessage_t	 startEventAckMessage;
		GameStartMessage_t	 gameStartMessage;
		HandStartMessage_t	 handStartMessage;
		PlayersTurnMessage_t	 playersTurnMessage;
		MyActionRequestMessage_t	 myActionRequestMessage;
		YourActionRejectedMessage_t	 yourActionRejectedMessage;
		PlayersActionDoneMessage_t	 playersActionDoneMessage;
		DealFlopCardsMessage_t	 dealFlopCardsMessage;
		DealTurnCardMessage_t	 dealTurnCardMessage;
		DealRiverCardMessage_t	 dealRiverCardMessage;
		AllInShowCardsMessage_t	 allInShowCardsMessage;
		EndOfHandMessage_t	 endOfHandMessage;
		ShowMyCardsRequestMessage_t	 showMyCardsRequestMessage;
		AfterHandShowCardsMessage_t	 afterHandShowCardsMessage;
		EndOfGameMessage_t	 endOfGameMessage;
		AskKickPlayerMessage_t	 askKickPlayerMessage;
		AskKickDeniedMessage_t	 askKickDeniedMessage;
		StartKickPetitionMessage_t	 startKickPetitionMessage;
		VoteKickRequestMessage_t	 voteKickRequestMessage;
		VoteKickReplyMessage_t	 voteKickReplyMessage;
		KickPetitionUpdateMessage_t	 kickPetitionUpdateMessage;
		EndKickPetitionMessage_t	 endKickPetitionMessage;
		StatisticsMessage_t	 statisticsMessage;
		ChatRequestMessage_t	 chatRequestMessage;
		ChatMessage_t	 chatMessage;
		DialogMessage_t	 dialogMessage;
		TimeoutWarningMessage_t	 timeoutWarningMessage;
		ResetTimeoutMessage_t	 resetTimeoutMessage;
		AfkWarningMessage_t	 afkWarningMessage;
		ReportAvatarMessage_t	 reportAvatarMessage;
		ReportAvatarAckMessage_t	 reportAvatarAckMessage;
		ErrorMessage_t	 errorMessage;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PokerTHMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PokerTHMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _PokerTHMessage_H_ */
#include <asn_internal.h>
