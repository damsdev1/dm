#pragma once
#include <winuser.h>

enum eWmUserMsgs
{
	WM_REQUESTDONE = WM_USER,
	WM_REPAINTPROFILE,
	WM_REPAINTGUILDLIST,
	WM_UPDATECHANLIST,
	WM_REPAINTMSGLIST,
	WM_UPDATECHANNELVIEW,
	WM_UPDATESELECTEDGUILD,
	WM_UPDATESELECTEDCHANNEL,
	WM_REFRESHMESSAGES,
	WM_WEBSOCKETMESSAGE,
	WM_ADDMESSAGE, // AddMessageParams
	WM_SENDMESSAGE,
	WM_MSGLIST_PULLDOWN, // specific to MessageList
	WM_LOGGEDOUT,
	WM_SESSIONCLOSED,
	WM_UPDATEPROFILEPOPOUT,
	WM_UPDATEPROFILEAVATAR, // UpdateProfileParams
	WM_UPDATEATTACHMENT,
	WM_UPDATEBITMAP, // used by the ImageViewer
	WM_IMAGESAVING,
	WM_IMAGESAVED, // LPCTSTR in lParam
	WM_IMAGECLEARSAVE,
	WM_UPDATEMEMBERLIST,
	WM_LOGINAGAIN,
	WM_LOGGEDOUT2,
	WM_RECALCMSGLIST,
	WM_MSGLISTUPDATEMODE,
	WM_REPOSITIONROLES,
	WM_REFRESHMEMBERS,
	WM_DEFERREDRESTARTSESSION,
	WM_CONNECTING,
	WM_CONNECTED,
	WM_UPDATEMESSAGE, // AddMessageParams
	WM_DELETEMESSAGE,
	WM_SENDTOMESSAGE,
	WM_SHOWPROFILEPOPOUT, // ShowProfilePopoutParams
	WM_UPDATECHANACKS, // Snowflake[2]
	WM_USERCOMMAND,
	WM_CLICKEDMESSAGE,
	WM_TOGGLEMEMBERS,
	WM_STARTTYPING, // TypingParams
	WM_FAILMESSAGE, // FailedMessageParams
	WM_STARTREPLY, // Snowflake[2]
	WM_SHOWUPLOADDIALOG,
	WM_SENDMESSAGEAUX, // SendMessageAuxParams
	WM_STARTEDITING, // Snowflake[1]
	WM_UPDATETEXTSIZE, // used by the MessageEditor
	WM_UPDATEMESSAGELENGTH,
	WM_SSLERROR,
	WM_FORCERESTART,
	WM_CONNECTERROR,
	WM_UPDATEUSER, // Snowflake[1]
	WM_UPDATEEMOJI, // Snowflake[1]
	WM_TOGGLECHANNELS,
	WM_CONNECTERROR2,
	WM_UPDATEUPLOADING,
	WM_DONEUPLOADING,
};
