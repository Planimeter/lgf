






















typedef long long int64;
typedef unsigned long long uint64;






typedef int int32;






typedef unsigned int uint32;




typedef short int16;




typedef unsigned short uint16;






typedef wchar_t char16;
typedef struct _cef_string_wide_t {
  wchar_t* str;
  size_t length;
  void (*dtor)(wchar_t* str);
} cef_string_wide_t;

typedef struct _cef_string_utf8_t {
  char* str;
  size_t length;
  void (*dtor)(char* str);
} cef_string_utf8_t;

typedef struct _cef_string_utf16_t {
  char16* str;
  size_t length;
  void (*dtor)(char16* str);
} cef_string_utf16_t;







__attribute__((visibility("default"))) int cef_string_wide_set(const wchar_t* src,
                                   size_t src_len,
                                   cef_string_wide_t* output,
                                   int copy);
__attribute__((visibility("default"))) int cef_string_utf8_set(const char* src,
                                   size_t src_len,
                                   cef_string_utf8_t* output,
                                   int copy);
__attribute__((visibility("default"))) int cef_string_utf16_set(const char16* src,
                                    size_t src_len,
                                    cef_string_utf16_t* output,
                                    int copy);
__attribute__((visibility("default"))) void cef_string_wide_clear(cef_string_wide_t* str);
__attribute__((visibility("default"))) void cef_string_utf8_clear(cef_string_utf8_t* str);
__attribute__((visibility("default"))) void cef_string_utf16_clear(cef_string_utf16_t* str);





__attribute__((visibility("default"))) int cef_string_wide_cmp(const cef_string_wide_t* str1,
                                   const cef_string_wide_t* str2);
__attribute__((visibility("default"))) int cef_string_utf8_cmp(const cef_string_utf8_t* str1,
                                   const cef_string_utf8_t* str2);
__attribute__((visibility("default"))) int cef_string_utf16_cmp(const cef_string_utf16_t* str1,
                                    const cef_string_utf16_t* str2);
__attribute__((visibility("default"))) int cef_string_wide_to_utf8(const wchar_t* src,
                                       size_t src_len,
                                       cef_string_utf8_t* output);
__attribute__((visibility("default"))) int cef_string_utf8_to_wide(const char* src,
                                       size_t src_len,
                                       cef_string_wide_t* output);

__attribute__((visibility("default"))) int cef_string_wide_to_utf16(const wchar_t* src,
                                        size_t src_len,
                                        cef_string_utf16_t* output);
__attribute__((visibility("default"))) int cef_string_utf16_to_wide(const char16* src,
                                        size_t src_len,
                                        cef_string_wide_t* output);

__attribute__((visibility("default"))) int cef_string_utf8_to_utf16(const char* src,
                                        size_t src_len,
                                        cef_string_utf16_t* output);
__attribute__((visibility("default"))) int cef_string_utf16_to_utf8(const char16* src,
                                        size_t src_len,
                                        cef_string_utf8_t* output);







__attribute__((visibility("default"))) int cef_string_ascii_to_wide(const char* src,
                                        size_t src_len,
                                        cef_string_wide_t* output);
__attribute__((visibility("default"))) int cef_string_ascii_to_utf16(const char* src,
                                         size_t src_len,
                                         cef_string_utf16_t* output);







typedef cef_string_wide_t* cef_string_userfree_wide_t;
typedef cef_string_utf8_t* cef_string_userfree_utf8_t;
typedef cef_string_utf16_t* cef_string_userfree_utf16_t;






__attribute__((visibility("default"))) cef_string_userfree_wide_t cef_string_userfree_wide_alloc();
__attribute__((visibility("default"))) cef_string_userfree_utf8_t cef_string_userfree_utf8_alloc();
__attribute__((visibility("default"))) cef_string_userfree_utf16_t cef_string_userfree_utf16_alloc();






__attribute__((visibility("default"))) void cef_string_userfree_wide_free(cef_string_userfree_wide_t str);
__attribute__((visibility("default"))) void cef_string_userfree_utf8_free(cef_string_userfree_utf8_t str);
__attribute__((visibility("default"))) void cef_string_userfree_utf16_free(cef_string_userfree_utf16_t str);






__attribute__((visibility("default"))) int cef_string_utf16_to_lower(const char16* src,
                                         size_t src_len,
                                         cef_string_utf16_t* output);
__attribute__((visibility("default"))) int cef_string_utf16_to_upper(const char16* src,
                                         size_t src_len,
                                         cef_string_utf16_t* output);
typedef char16 cef_char_t;
typedef cef_string_userfree_utf16_t cef_string_userfree_t;
typedef cef_string_utf16_t cef_string_t;

typedef void* cef_string_list_t;




__attribute__((visibility("default"))) cef_string_list_t cef_string_list_alloc();




__attribute__((visibility("default"))) size_t cef_string_list_size(cef_string_list_t list);





__attribute__((visibility("default"))) int cef_string_list_value(cef_string_list_t list,
                                     size_t index,
                                     cef_string_t* value);




__attribute__((visibility("default"))) void cef_string_list_append(cef_string_list_t list,
                                       const cef_string_t* value);




__attribute__((visibility("default"))) void cef_string_list_clear(cef_string_list_t list);




__attribute__((visibility("default"))) void cef_string_list_free(cef_string_list_t list);




__attribute__((visibility("default"))) cef_string_list_t cef_string_list_copy(cef_string_list_t list);

typedef void* cef_string_map_t;




__attribute__((visibility("default"))) cef_string_map_t cef_string_map_alloc();




__attribute__((visibility("default"))) size_t cef_string_map_size(cef_string_map_t map);




__attribute__((visibility("default"))) int cef_string_map_find(cef_string_map_t map,
                                   const cef_string_t* key,
                                   cef_string_t* value);




__attribute__((visibility("default"))) int cef_string_map_key(cef_string_map_t map,
                                  size_t index,
                                  cef_string_t* key);




__attribute__((visibility("default"))) int cef_string_map_value(cef_string_map_t map,
                                    size_t index,
                                    cef_string_t* value);




__attribute__((visibility("default"))) int cef_string_map_append(cef_string_map_t map,
                                     const cef_string_t* key,
                                     const cef_string_t* value);




__attribute__((visibility("default"))) void cef_string_map_clear(cef_string_map_t map);




__attribute__((visibility("default"))) void cef_string_map_free(cef_string_map_t map);

typedef void* cef_string_multimap_t;




__attribute__((visibility("default"))) cef_string_multimap_t cef_string_multimap_alloc();




__attribute__((visibility("default"))) size_t cef_string_multimap_size(cef_string_multimap_t map);




__attribute__((visibility("default"))) size_t cef_string_multimap_find_count(cef_string_multimap_t map,
                                                 const cef_string_t* key);




__attribute__((visibility("default"))) int cef_string_multimap_enumerate(cef_string_multimap_t map,
                                             const cef_string_t* key,
                                             size_t value_index,
                                             cef_string_t* value);




__attribute__((visibility("default"))) int cef_string_multimap_key(cef_string_multimap_t map,
                                       size_t index,
                                       cef_string_t* key);




__attribute__((visibility("default"))) int cef_string_multimap_value(cef_string_multimap_t map,
                                         size_t index,
                                         cef_string_t* value);




__attribute__((visibility("default"))) int cef_string_multimap_append(cef_string_multimap_t map,
                                          const cef_string_t* key,
                                          const cef_string_t* value);




__attribute__((visibility("default"))) void cef_string_multimap_clear(cef_string_multimap_t map);




__attribute__((visibility("default"))) void cef_string_multimap_free(cef_string_multimap_t map);

















typedef struct _cef_time_t {
  int year;

  int month;
  int day_of_week;
  int day_of_month;
  int hour;
  int minute;
  int second;

  int millisecond;
} cef_time_t;





// __attribute__((visibility("default"))) int cef_time_to_timet(const cef_time_t* cef_time, time_t* time);
// __attribute__((visibility("default"))) int cef_time_from_timet(time_t time, cef_time_t* cef_time);







__attribute__((visibility("default"))) int cef_time_to_doublet(const cef_time_t* cef_time, double* time);
__attribute__((visibility("default"))) int cef_time_from_doublet(double time, cef_time_t* cef_time);




__attribute__((visibility("default"))) int cef_time_now(cef_time_t* cef_time);




__attribute__((visibility("default"))) int cef_time_delta(const cef_time_t* cef_time1,
                              const cef_time_t* cef_time2,
                              long long* delta);









struct HINSTANCE__{int unused;}; typedef struct HINSTANCE__ *HINSTANCE;
typedef HINSTANCE HMODULE;
typedef struct _cef_main_args_t { HINSTANCE instance; } cef_main_args_t;




typedef unsigned long       DWORD;
struct HWND__{int unused;}; typedef struct HWND__ *HWND;
struct HMENU__{int unused;}; typedef struct HMENU__ *HMENU;
typedef struct _cef_window_info_t {

  DWORD ex_style;
  cef_string_t window_name;
  DWORD style;
  int x;
  int y;
  int width;
  int height;
  HWND parent_window;
  HMENU menu;
  int windowless_rendering_enabled;




  HWND window;
} cef_window_info_t;
typedef uint32 cef_color_t;
typedef enum {



  LOGSEVERITY_DEFAULT,




  LOGSEVERITY_VERBOSE,




  LOGSEVERITY_DEBUG = LOGSEVERITY_VERBOSE,




  LOGSEVERITY_INFO,




  LOGSEVERITY_WARNING,




  LOGSEVERITY_ERROR,




  LOGSEVERITY_DISABLE = 99
} cef_log_severity_t;




typedef enum {



  STATE_DEFAULT = 0,




  STATE_ENABLED,




  STATE_DISABLED,
} cef_state_t;






typedef struct _cef_settings_t {



  size_t size;







  int single_process;






  int no_sandbox;
  cef_string_t browser_subprocess_path;







  cef_string_t framework_dir_path;







  int multi_threaded_message_loop;
  int external_message_pump;






  int windowless_rendering_enabled;







  int command_line_args_disabled;
  cef_string_t cache_path;
  cef_string_t user_data_path;
  int persist_session_cookies;
  int persist_user_preferences;






  cef_string_t user_agent;







  cef_string_t product_version;
  cef_string_t locale;
  cef_string_t log_file;







  cef_log_severity_t log_severity;






  cef_string_t javascript_flags;
  cef_string_t resources_dir_path;
  cef_string_t locales_dir_path;
  int pack_loading_disabled;
  int remote_debugging_port;
  int uncaught_exception_stack_size;
  int ignore_certificate_errors;
  int enable_net_security_expiration;
  cef_color_t background_color;
  cef_string_t accept_language_list;
} cef_settings_t;





typedef struct _cef_request_context_settings_t {



  size_t size;
  cef_string_t cache_path;
  int persist_session_cookies;







  int persist_user_preferences;
  int ignore_certificate_errors;
  int enable_net_security_expiration;
  cef_string_t accept_language_list;
} cef_request_context_settings_t;







typedef struct _cef_browser_settings_t {



  size_t size;
  int windowless_frame_rate;






  cef_string_t standard_font_family;
  cef_string_t fixed_font_family;
  cef_string_t serif_font_family;
  cef_string_t sans_serif_font_family;
  cef_string_t cursive_font_family;
  cef_string_t fantasy_font_family;
  int default_font_size;
  int default_fixed_font_size;
  int minimum_font_size;
  int minimum_logical_font_size;





  cef_string_t default_encoding;





  cef_state_t remote_fonts;





  cef_state_t javascript;
  cef_state_t javascript_close_windows;





  cef_state_t javascript_access_clipboard;







  cef_state_t javascript_dom_paste;





  cef_state_t plugins;





  cef_state_t universal_access_from_file_urls;





  cef_state_t file_access_from_file_urls;







  cef_state_t web_security;






  cef_state_t image_loading;






  cef_state_t image_shrink_standalone_to_fit;





  cef_state_t text_area_resize;





  cef_state_t tab_to_links;





  cef_state_t local_storage;





  cef_state_t databases;





  cef_state_t application_cache;






  cef_state_t webgl;
  cef_color_t background_color;







  cef_string_t accept_language_list;
} cef_browser_settings_t;




typedef enum {



  RV_CANCEL = 0,




  RV_CONTINUE,




  RV_CONTINUE_ASYNC,
} cef_return_value_t;




typedef struct _cef_urlparts_t {



  cef_string_t spec;




  cef_string_t scheme;




  cef_string_t username;




  cef_string_t password;





  cef_string_t host;




  cef_string_t port;







  cef_string_t origin;




  cef_string_t path;




  cef_string_t query;
} cef_urlparts_t;




typedef struct _cef_cookie_t {



  cef_string_t name;




  cef_string_t value;






  cef_string_t domain;





  cef_string_t path;




  int secure;




  int httponly;





  cef_time_t creation;





  cef_time_t last_access;




  int has_expires;
  cef_time_t expires;
} cef_cookie_t;




typedef enum {



  TS_ABNORMAL_TERMINATION,




  TS_PROCESS_WAS_KILLED,




  TS_PROCESS_CRASHED,
} cef_termination_status_t;




typedef enum {



  PK_DIR_CURRENT,




  PK_DIR_EXE,




  PK_DIR_MODULE,




  PK_DIR_TEMP,




  PK_FILE_EXE,





  PK_FILE_MODULE,





  PK_LOCAL_APP_DATA,





  PK_USER_DATA,





  PK_DIR_RESOURCES,
} cef_path_key_t;




typedef enum {
  ST_LOCALSTORAGE = 0,
  ST_SESSIONSTORAGE,
} cef_storage_type_t;





typedef enum {
  ERR_NONE = 0,
  ERR_FAILED = -2,
  ERR_ABORTED = -3,
  ERR_INVALID_ARGUMENT = -4,
  ERR_INVALID_HANDLE = -5,
  ERR_FILE_NOT_FOUND = -6,
  ERR_TIMED_OUT = -7,
  ERR_FILE_TOO_BIG = -8,
  ERR_UNEXPECTED = -9,
  ERR_ACCESS_DENIED = -10,
  ERR_NOT_IMPLEMENTED = -11,
  ERR_CONNECTION_CLOSED = -100,
  ERR_CONNECTION_RESET = -101,
  ERR_CONNECTION_REFUSED = -102,
  ERR_CONNECTION_ABORTED = -103,
  ERR_CONNECTION_FAILED = -104,
  ERR_NAME_NOT_RESOLVED = -105,
  ERR_INTERNET_DISCONNECTED = -106,
  ERR_SSL_PROTOCOL_ERROR = -107,
  ERR_ADDRESS_INVALID = -108,
  ERR_ADDRESS_UNREACHABLE = -109,
  ERR_SSL_CLIENT_AUTH_CERT_NEEDED = -110,
  ERR_TUNNEL_CONNECTION_FAILED = -111,
  ERR_NO_SSL_VERSIONS_ENABLED = -112,
  ERR_SSL_VERSION_OR_CIPHER_MISMATCH = -113,
  ERR_SSL_RENEGOTIATION_REQUESTED = -114,
  ERR_CERT_COMMON_NAME_INVALID = -200,
  ERR_CERT_BEGIN = ERR_CERT_COMMON_NAME_INVALID,
  ERR_CERT_DATE_INVALID = -201,
  ERR_CERT_AUTHORITY_INVALID = -202,
  ERR_CERT_CONTAINS_ERRORS = -203,
  ERR_CERT_NO_REVOCATION_MECHANISM = -204,
  ERR_CERT_UNABLE_TO_CHECK_REVOCATION = -205,
  ERR_CERT_REVOKED = -206,
  ERR_CERT_INVALID = -207,
  ERR_CERT_WEAK_SIGNATURE_ALGORITHM = -208,

  ERR_CERT_NON_UNIQUE_NAME = -210,
  ERR_CERT_WEAK_KEY = -211,
  ERR_CERT_NAME_CONSTRAINT_VIOLATION = -212,
  ERR_CERT_VALIDITY_TOO_LONG = -213,
  ERR_CERT_END = ERR_CERT_VALIDITY_TOO_LONG,
  ERR_INVALID_URL = -300,
  ERR_DISALLOWED_URL_SCHEME = -301,
  ERR_UNKNOWN_URL_SCHEME = -302,
  ERR_TOO_MANY_REDIRECTS = -310,
  ERR_UNSAFE_REDIRECT = -311,
  ERR_UNSAFE_PORT = -312,
  ERR_INVALID_RESPONSE = -320,
  ERR_INVALID_CHUNKED_ENCODING = -321,
  ERR_METHOD_NOT_SUPPORTED = -322,
  ERR_UNEXPECTED_PROXY_AUTH = -323,
  ERR_EMPTY_RESPONSE = -324,
  ERR_RESPONSE_HEADERS_TOO_BIG = -325,
  ERR_CACHE_MISS = -400,
  ERR_INSECURE_RESPONSE = -501,
} cef_errorcode_t;






typedef enum {
  CERT_STATUS_NONE = 0,
  CERT_STATUS_COMMON_NAME_INVALID = 1 << 0,
  CERT_STATUS_DATE_INVALID = 1 << 1,
  CERT_STATUS_AUTHORITY_INVALID = 1 << 2,

  CERT_STATUS_NO_REVOCATION_MECHANISM = 1 << 4,
  CERT_STATUS_UNABLE_TO_CHECK_REVOCATION = 1 << 5,
  CERT_STATUS_REVOKED = 1 << 6,
  CERT_STATUS_INVALID = 1 << 7,
  CERT_STATUS_WEAK_SIGNATURE_ALGORITHM = 1 << 8,

  CERT_STATUS_NON_UNIQUE_NAME = 1 << 10,
  CERT_STATUS_WEAK_KEY = 1 << 11,

  CERT_STATUS_PINNED_KEY_MISSING = 1 << 13,
  CERT_STATUS_NAME_CONSTRAINT_VIOLATION = 1 << 14,
  CERT_STATUS_VALIDITY_TOO_LONG = 1 << 15,


  CERT_STATUS_IS_EV = 1 << 16,
  CERT_STATUS_REV_CHECKING_ENABLED = 1 << 17,

  CERT_STATUS_SHA1_SIGNATURE_PRESENT = 1 << 19,
  CERT_STATUS_CT_COMPLIANCE_FAILED = 1 << 20,
} cef_cert_status_t;






typedef enum {
  WOD_UNKNOWN,
  WOD_CURRENT_TAB,
  WOD_SINGLETON_TAB,
  WOD_NEW_FOREGROUND_TAB,
  WOD_NEW_BACKGROUND_TAB,
  WOD_NEW_POPUP,
  WOD_NEW_WINDOW,
  WOD_SAVE_TO_DISK,
  WOD_OFF_THE_RECORD,
  WOD_IGNORE_ACTION
} cef_window_open_disposition_t;






typedef enum {
  DRAG_OPERATION_NONE = 0,
  DRAG_OPERATION_COPY = 1,
  DRAG_OPERATION_LINK = 2,
  DRAG_OPERATION_GENERIC = 4,
  DRAG_OPERATION_PRIVATE = 8,
  DRAG_OPERATION_MOVE = 16,
  DRAG_OPERATION_DELETE = 32,
  DRAG_OPERATION_EVERY = 0xffffffff
} cef_drag_operations_mask_t;




typedef enum {
  V8_ACCESS_CONTROL_DEFAULT = 0,
  V8_ACCESS_CONTROL_ALL_CAN_READ = 1,
  V8_ACCESS_CONTROL_ALL_CAN_WRITE = 1 << 1,
  V8_ACCESS_CONTROL_PROHIBITS_OVERWRITING = 1 << 2
} cef_v8_accesscontrol_t;




typedef enum {
  V8_PROPERTY_ATTRIBUTE_NONE = 0,

  V8_PROPERTY_ATTRIBUTE_READONLY = 1 << 0,
  V8_PROPERTY_ATTRIBUTE_DONTENUM = 1 << 1,
  V8_PROPERTY_ATTRIBUTE_DONTDELETE = 1 << 2
} cef_v8_propertyattribute_t;




typedef enum {
  PDE_TYPE_EMPTY = 0,
  PDE_TYPE_BYTES,
  PDE_TYPE_FILE,
} cef_postdataelement_type_t;




typedef enum {



  RT_MAIN_FRAME = 0,




  RT_SUB_FRAME,




  RT_STYLESHEET,




  RT_SCRIPT,




  RT_IMAGE,




  RT_FONT_RESOURCE,





  RT_SUB_RESOURCE,




  RT_OBJECT,




  RT_MEDIA,




  RT_WORKER,




  RT_SHARED_WORKER,




  RT_PREFETCH,




  RT_FAVICON,




  RT_XHR,




  RT_PING,




  RT_SERVICE_WORKER,




  RT_CSP_REPORT,




  RT_PLUGIN_RESOURCE,
} cef_resource_type_t;





typedef enum {





  TT_LINK = 0,






  TT_EXPLICIT = 1,
  TT_AUTO_SUBFRAME = 3,
  TT_MANUAL_SUBFRAME = 4,






  TT_FORM_SUBMIT = 7,






  TT_RELOAD = 8,




  TT_SOURCE_MASK = 0xFF,
  TT_BLOCKED_FLAG = 0x00800000,




  TT_FORWARD_BACK_FLAG = 0x01000000,




  TT_CHAIN_START_FLAG = 0x10000000,




  TT_CHAIN_END_FLAG = 0x20000000,




  TT_CLIENT_REDIRECT_FLAG = 0x40000000,




  TT_SERVER_REDIRECT_FLAG = 0x80000000,




  TT_IS_REDIRECT_MASK = 0xC0000000,




  TT_QUALIFIER_MASK = 0xFFFFFF00,
} cef_transition_type_t;




typedef enum {



  UR_FLAG_NONE = 0,







  UR_FLAG_SKIP_CACHE = 1 << 0,







  UR_FLAG_ONLY_FROM_CACHE = 1 << 1,





  UR_FLAG_ALLOW_STORED_CREDENTIALS = 1 << 2,




  UR_FLAG_REPORT_UPLOAD_PROGRESS = 1 << 3,




  UR_FLAG_NO_DOWNLOAD_DATA = 1 << 4,






  UR_FLAG_NO_RETRY_ON_5XX = 1 << 5,
} cef_urlrequest_flags_t;




typedef enum {



  UR_UNKNOWN = 0,




  UR_SUCCESS,





  UR_IO_PENDING,




  UR_CANCELED,




  UR_FAILED,
} cef_urlrequest_status_t;




typedef struct _cef_point_t {
  int x;
  int y;
} cef_point_t;




typedef struct _cef_rect_t {
  int x;
  int y;
  int width;
  int height;
} cef_rect_t;




typedef struct _cef_size_t {
  int width;
  int height;
} cef_size_t;




typedef struct _cef_range_t {
  int from;
  int to;
} cef_range_t;




typedef struct _cef_insets_t {
  int top;
  int left;
  int bottom;
  int right;
} cef_insets_t;




typedef struct _cef_draggable_region_t {



  cef_rect_t bounds;




  int draggable;
} cef_draggable_region_t;




typedef enum {



  PID_BROWSER,



  PID_RENDERER,
} cef_process_id_t;




typedef enum {







  TID_UI,




  TID_DB,




  TID_FILE,





  TID_FILE_USER_BLOCKING,




  TID_PROCESS_LAUNCHER,




  TID_CACHE,




  TID_IO,






  TID_RENDERER,
} cef_thread_id_t;




typedef enum {



  TP_BACKGROUND,




  TP_NORMAL,




  TP_DISPLAY,




  TP_REALTIME_AUDIO,
} cef_thread_priority_t;





typedef enum {



  ML_TYPE_DEFAULT,




  ML_TYPE_UI,




  ML_TYPE_IO,
} cef_message_loop_type_t;





typedef enum {



  COM_INIT_MODE_NONE,




  COM_INIT_MODE_STA,




  COM_INIT_MODE_MTA,
} cef_com_init_mode_t;




typedef enum {
  VTYPE_INVALID = 0,
  VTYPE_NULL,
  VTYPE_BOOL,
  VTYPE_INT,
  VTYPE_DOUBLE,
  VTYPE_STRING,
  VTYPE_BINARY,
  VTYPE_DICTIONARY,
  VTYPE_LIST,
} cef_value_type_t;




typedef enum {
  JSDIALOGTYPE_ALERT = 0,
  JSDIALOGTYPE_CONFIRM,
  JSDIALOGTYPE_PROMPT,
} cef_jsdialog_type_t;






typedef struct _cef_screen_info_t {




  float device_scale_factor;




  int depth;





  int depth_per_component;




  int is_monochrome;
  cef_rect_t rect;
  cef_rect_t available_rect;
} cef_screen_info_t;





typedef enum {

  MENU_ID_BACK = 100,
  MENU_ID_FORWARD = 101,
  MENU_ID_RELOAD = 102,
  MENU_ID_RELOAD_NOCACHE = 103,
  MENU_ID_STOPLOAD = 104,


  MENU_ID_UNDO = 110,
  MENU_ID_REDO = 111,
  MENU_ID_CUT = 112,
  MENU_ID_COPY = 113,
  MENU_ID_PASTE = 114,
  MENU_ID_DELETE = 115,
  MENU_ID_SELECT_ALL = 116,


  MENU_ID_FIND = 130,
  MENU_ID_PRINT = 131,
  MENU_ID_VIEW_SOURCE = 132,


  MENU_ID_SPELLCHECK_SUGGESTION_0 = 200,
  MENU_ID_SPELLCHECK_SUGGESTION_1 = 201,
  MENU_ID_SPELLCHECK_SUGGESTION_2 = 202,
  MENU_ID_SPELLCHECK_SUGGESTION_3 = 203,
  MENU_ID_SPELLCHECK_SUGGESTION_4 = 204,
  MENU_ID_SPELLCHECK_SUGGESTION_LAST = 204,
  MENU_ID_NO_SPELLING_SUGGESTIONS = 205,
  MENU_ID_ADD_TO_DICTIONARY = 206,



  MENU_ID_CUSTOM_FIRST = 220,
  MENU_ID_CUSTOM_LAST = 250,




  MENU_ID_USER_FIRST = 26500,
  MENU_ID_USER_LAST = 28500,
} cef_menu_id_t;




typedef enum {
  MBT_LEFT = 0,
  MBT_MIDDLE,
  MBT_RIGHT,
} cef_mouse_button_type_t;




typedef struct _cef_mouse_event_t {



  int x;




  int y;





  uint32 modifiers;
} cef_mouse_event_t;




typedef enum {
  PET_VIEW = 0,
  PET_POPUP,
} cef_paint_element_type_t;




typedef enum {
  EVENTFLAG_NONE = 0,
  EVENTFLAG_CAPS_LOCK_ON = 1 << 0,
  EVENTFLAG_SHIFT_DOWN = 1 << 1,
  EVENTFLAG_CONTROL_DOWN = 1 << 2,
  EVENTFLAG_ALT_DOWN = 1 << 3,
  EVENTFLAG_LEFT_MOUSE_BUTTON = 1 << 4,
  EVENTFLAG_MIDDLE_MOUSE_BUTTON = 1 << 5,
  EVENTFLAG_RIGHT_MOUSE_BUTTON = 1 << 6,

  EVENTFLAG_COMMAND_DOWN = 1 << 7,
  EVENTFLAG_NUM_LOCK_ON = 1 << 8,
  EVENTFLAG_IS_KEY_PAD = 1 << 9,
  EVENTFLAG_IS_LEFT = 1 << 10,
  EVENTFLAG_IS_RIGHT = 1 << 11,
} cef_event_flags_t;




typedef enum {
  MENUITEMTYPE_NONE,
  MENUITEMTYPE_COMMAND,
  MENUITEMTYPE_CHECK,
  MENUITEMTYPE_RADIO,
  MENUITEMTYPE_SEPARATOR,
  MENUITEMTYPE_SUBMENU,
} cef_menu_item_type_t;




typedef enum {



  CM_TYPEFLAG_NONE = 0,



  CM_TYPEFLAG_PAGE = 1 << 0,



  CM_TYPEFLAG_FRAME = 1 << 1,



  CM_TYPEFLAG_LINK = 1 << 2,



  CM_TYPEFLAG_MEDIA = 1 << 3,



  CM_TYPEFLAG_SELECTION = 1 << 4,



  CM_TYPEFLAG_EDITABLE = 1 << 5,
} cef_context_menu_type_flags_t;




typedef enum {



  CM_MEDIATYPE_NONE,



  CM_MEDIATYPE_IMAGE,



  CM_MEDIATYPE_VIDEO,



  CM_MEDIATYPE_AUDIO,



  CM_MEDIATYPE_FILE,



  CM_MEDIATYPE_PLUGIN,
} cef_context_menu_media_type_t;




typedef enum {
  CM_MEDIAFLAG_NONE = 0,
  CM_MEDIAFLAG_ERROR = 1 << 0,
  CM_MEDIAFLAG_PAUSED = 1 << 1,
  CM_MEDIAFLAG_MUTED = 1 << 2,
  CM_MEDIAFLAG_LOOP = 1 << 3,
  CM_MEDIAFLAG_CAN_SAVE = 1 << 4,
  CM_MEDIAFLAG_HAS_AUDIO = 1 << 5,
  CM_MEDIAFLAG_HAS_VIDEO = 1 << 6,
  CM_MEDIAFLAG_CONTROL_ROOT_ELEMENT = 1 << 7,
  CM_MEDIAFLAG_CAN_PRINT = 1 << 8,
  CM_MEDIAFLAG_CAN_ROTATE = 1 << 9,
} cef_context_menu_media_state_flags_t;




typedef enum {
  CM_EDITFLAG_NONE = 0,
  CM_EDITFLAG_CAN_UNDO = 1 << 0,
  CM_EDITFLAG_CAN_REDO = 1 << 1,
  CM_EDITFLAG_CAN_CUT = 1 << 2,
  CM_EDITFLAG_CAN_COPY = 1 << 3,
  CM_EDITFLAG_CAN_PASTE = 1 << 4,
  CM_EDITFLAG_CAN_DELETE = 1 << 5,
  CM_EDITFLAG_CAN_SELECT_ALL = 1 << 6,
  CM_EDITFLAG_CAN_TRANSLATE = 1 << 7,
} cef_context_menu_edit_state_flags_t;




typedef enum {



  KEYEVENT_RAWKEYDOWN = 0,






  KEYEVENT_KEYDOWN,




  KEYEVENT_KEYUP,






  KEYEVENT_CHAR
} cef_key_event_type_t;




typedef struct _cef_key_event_t {



  cef_key_event_type_t type;





  uint32 modifiers;







  int windows_key_code;




  int native_key_code;






  int is_system_key;




  char16 character;





  char16 unmodified_character;





  int focus_on_editable_field;
} cef_key_event_t;




typedef enum {



  FOCUS_SOURCE_NAVIGATION = 0,



  FOCUS_SOURCE_SYSTEM,
} cef_focus_source_t;




typedef enum {
  NAVIGATION_LINK_CLICKED = 0,
  NAVIGATION_FORM_SUBMITTED,
  NAVIGATION_BACK_FORWARD,
  NAVIGATION_RELOAD,
  NAVIGATION_FORM_RESUBMITTED,
  NAVIGATION_OTHER,
} cef_navigation_type_t;







typedef enum {
  XML_ENCODING_NONE = 0,
  XML_ENCODING_UTF8,
  XML_ENCODING_UTF16LE,
  XML_ENCODING_UTF16BE,
  XML_ENCODING_ASCII,
} cef_xml_encoding_type_t;




typedef enum {
  XML_NODE_UNSUPPORTED = 0,
  XML_NODE_PROCESSING_INSTRUCTION,
  XML_NODE_DOCUMENT_TYPE,
  XML_NODE_ELEMENT_START,
  XML_NODE_ELEMENT_END,
  XML_NODE_ATTRIBUTE,
  XML_NODE_TEXT,
  XML_NODE_CDATA,
  XML_NODE_ENTITY_REFERENCE,
  XML_NODE_WHITESPACE,
  XML_NODE_COMMENT,
} cef_xml_node_type_t;




typedef struct _cef_popup_features_t {
  int x;
  int xSet;
  int y;
  int ySet;
  int width;
  int widthSet;
  int height;
  int heightSet;

  int menuBarVisible;
  int statusBarVisible;
  int toolBarVisible;
  int scrollbarsVisible;
} cef_popup_features_t;




typedef enum {
  DOM_DOCUMENT_TYPE_UNKNOWN = 0,
  DOM_DOCUMENT_TYPE_HTML,
  DOM_DOCUMENT_TYPE_XHTML,
  DOM_DOCUMENT_TYPE_PLUGIN,
} cef_dom_document_type_t;




typedef enum {
  DOM_EVENT_CATEGORY_UNKNOWN = 0x0,
  DOM_EVENT_CATEGORY_UI = 0x1,
  DOM_EVENT_CATEGORY_MOUSE = 0x2,
  DOM_EVENT_CATEGORY_MUTATION = 0x4,
  DOM_EVENT_CATEGORY_KEYBOARD = 0x8,
  DOM_EVENT_CATEGORY_TEXT = 0x10,
  DOM_EVENT_CATEGORY_COMPOSITION = 0x20,
  DOM_EVENT_CATEGORY_DRAG = 0x40,
  DOM_EVENT_CATEGORY_CLIPBOARD = 0x80,
  DOM_EVENT_CATEGORY_MESSAGE = 0x100,
  DOM_EVENT_CATEGORY_WHEEL = 0x200,
  DOM_EVENT_CATEGORY_BEFORE_TEXT_INSERTED = 0x400,
  DOM_EVENT_CATEGORY_OVERFLOW = 0x800,
  DOM_EVENT_CATEGORY_PAGE_TRANSITION = 0x1000,
  DOM_EVENT_CATEGORY_POPSTATE = 0x2000,
  DOM_EVENT_CATEGORY_PROGRESS = 0x4000,
  DOM_EVENT_CATEGORY_XMLHTTPREQUEST_PROGRESS = 0x8000,
} cef_dom_event_category_t;




typedef enum {
  DOM_EVENT_PHASE_UNKNOWN = 0,
  DOM_EVENT_PHASE_CAPTURING,
  DOM_EVENT_PHASE_AT_TARGET,
  DOM_EVENT_PHASE_BUBBLING,
} cef_dom_event_phase_t;




typedef enum {
  DOM_NODE_TYPE_UNSUPPORTED = 0,
  DOM_NODE_TYPE_ELEMENT,
  DOM_NODE_TYPE_ATTRIBUTE,
  DOM_NODE_TYPE_TEXT,
  DOM_NODE_TYPE_CDATA_SECTION,
  DOM_NODE_TYPE_PROCESSING_INSTRUCTIONS,
  DOM_NODE_TYPE_COMMENT,
  DOM_NODE_TYPE_DOCUMENT,
  DOM_NODE_TYPE_DOCUMENT_TYPE,
  DOM_NODE_TYPE_DOCUMENT_FRAGMENT,
} cef_dom_node_type_t;




typedef enum {



  FILE_DIALOG_OPEN = 0,




  FILE_DIALOG_OPEN_MULTIPLE,




  FILE_DIALOG_OPEN_FOLDER,





  FILE_DIALOG_SAVE,




  FILE_DIALOG_TYPE_MASK = 0xFF,
  FILE_DIALOG_OVERWRITEPROMPT_FLAG = 0x01000000,




  FILE_DIALOG_HIDEREADONLY_FLAG = 0x02000000,
} cef_file_dialog_mode_t;




typedef enum {
  GEOPOSITON_ERROR_NONE = 0,
  GEOPOSITON_ERROR_PERMISSION_DENIED,
  GEOPOSITON_ERROR_POSITION_UNAVAILABLE,
  GEOPOSITON_ERROR_TIMEOUT,
} cef_geoposition_error_code_t;






typedef struct _cef_geoposition_t {



  double latitude;




  double longitude;




  double altitude;




  double accuracy;




  double altitude_accuracy;




  double heading;




  double speed;





  cef_time_t timestamp;




  cef_geoposition_error_code_t error_code;




  cef_string_t error_message;
} cef_geoposition_t;




typedef enum {
  COLOR_MODEL_UNKNOWN,
  COLOR_MODEL_GRAY,
  COLOR_MODEL_COLOR,
  COLOR_MODEL_CMYK,
  COLOR_MODEL_CMY,
  COLOR_MODEL_KCMY,
  COLOR_MODEL_CMY_K,
  COLOR_MODEL_BLACK,
  COLOR_MODEL_GRAYSCALE,
  COLOR_MODEL_RGB,
  COLOR_MODEL_RGB16,
  COLOR_MODEL_RGBA,
  COLOR_MODEL_COLORMODE_COLOR,
  COLOR_MODEL_COLORMODE_MONOCHROME,
  COLOR_MODEL_HP_COLOR_COLOR,
  COLOR_MODEL_HP_COLOR_BLACK,
  COLOR_MODEL_PRINTOUTMODE_NORMAL,
  COLOR_MODEL_PRINTOUTMODE_NORMAL_GRAY,
  COLOR_MODEL_PROCESSCOLORMODEL_CMYK,
  COLOR_MODEL_PROCESSCOLORMODEL_GREYSCALE,
  COLOR_MODEL_PROCESSCOLORMODEL_RGB,
} cef_color_model_t;




typedef enum {
  DUPLEX_MODE_UNKNOWN = -1,
  DUPLEX_MODE_SIMPLEX,
  DUPLEX_MODE_LONG_EDGE,
  DUPLEX_MODE_SHORT_EDGE,
} cef_duplex_mode_t;




typedef enum {
  CT_POINTER = 0,
  CT_CROSS,
  CT_HAND,
  CT_IBEAM,
  CT_WAIT,
  CT_HELP,
  CT_EASTRESIZE,
  CT_NORTHRESIZE,
  CT_NORTHEASTRESIZE,
  CT_NORTHWESTRESIZE,
  CT_SOUTHRESIZE,
  CT_SOUTHEASTRESIZE,
  CT_SOUTHWESTRESIZE,
  CT_WESTRESIZE,
  CT_NORTHSOUTHRESIZE,
  CT_EASTWESTRESIZE,
  CT_NORTHEASTSOUTHWESTRESIZE,
  CT_NORTHWESTSOUTHEASTRESIZE,
  CT_COLUMNRESIZE,
  CT_ROWRESIZE,
  CT_MIDDLEPANNING,
  CT_EASTPANNING,
  CT_NORTHPANNING,
  CT_NORTHEASTPANNING,
  CT_NORTHWESTPANNING,
  CT_SOUTHPANNING,
  CT_SOUTHEASTPANNING,
  CT_SOUTHWESTPANNING,
  CT_WESTPANNING,
  CT_MOVE,
  CT_VERTICALTEXT,
  CT_CELL,
  CT_CONTEXTMENU,
  CT_ALIAS,
  CT_PROGRESS,
  CT_NODROP,
  CT_COPY,
  CT_NONE,
  CT_NOTALLOWED,
  CT_ZOOMIN,
  CT_ZOOMOUT,
  CT_GRAB,
  CT_GRABBING,
  CT_CUSTOM,
} cef_cursor_type_t;






typedef struct _cef_cursor_info_t {
  cef_point_t hotspot;
  float image_scale_factor;
  void* buffer;
  cef_size_t size;
} cef_cursor_info_t;




typedef enum {



  UU_NONE = 0,
  UU_NORMAL = 1 << 0,







  UU_SPACES = 1 << 1,
  UU_PATH_SEPARATORS = 1 << 2,
  UU_URL_SPECIAL_CHARS_EXCEPT_PATH_SEPARATORS = 1 << 3,
  UU_SPOOFING_AND_CONTROL_CHARS = 1 << 4,




  UU_REPLACE_PLUS_WITH_SPACE = 1 << 5,
} cef_uri_unescape_rule_t;




typedef enum {




  JSON_PARSER_RFC = 0,




  JSON_PARSER_ALLOW_TRAILING_COMMAS = 1 << 0,
} cef_json_parser_options_t;




typedef enum {
  JSON_NO_ERROR = 0,
  JSON_INVALID_ESCAPE,
  JSON_SYNTAX_ERROR,
  JSON_UNEXPECTED_TOKEN,
  JSON_TRAILING_COMMA,
  JSON_TOO_MUCH_NESTING,
  JSON_UNEXPECTED_DATA_AFTER_ROOT,
  JSON_UNSUPPORTED_ENCODING,
  JSON_UNQUOTED_DICTIONARY_KEY,
  JSON_PARSE_ERROR_COUNT
} cef_json_parser_error_t;




typedef enum {



  JSON_WRITER_DEFAULT = 0,







  JSON_WRITER_OMIT_BINARY_VALUES = 1 << 0,







  JSON_WRITER_OMIT_DOUBLE_TYPE_PRESERVATION = 1 << 1,





  JSON_WRITER_PRETTY_PRINT = 1 << 2,
} cef_json_writer_options_t;




typedef enum {



  PDF_PRINT_MARGIN_DEFAULT,




  PDF_PRINT_MARGIN_NONE,




  PDF_PRINT_MARGIN_MINIMUM,




  PDF_PRINT_MARGIN_CUSTOM,
} cef_pdf_print_margin_type_t;




typedef struct _cef_pdf_print_settings_t {




  cef_string_t header_footer_title;





  cef_string_t header_footer_url;





  int page_width;
  int page_height;






  int scale_factor;





  double margin_top;
  double margin_right;
  double margin_bottom;
  double margin_left;




  cef_pdf_print_margin_type_t margin_type;





  int header_footer_enabled;




  int selection_only;




  int landscape;





  int backgrounds_enabled;

} cef_pdf_print_settings_t;






typedef enum {
  SCALE_FACTOR_NONE = 0,
  SCALE_FACTOR_100P,
  SCALE_FACTOR_125P,
  SCALE_FACTOR_133P,
  SCALE_FACTOR_140P,
  SCALE_FACTOR_150P,
  SCALE_FACTOR_180P,
  SCALE_FACTOR_200P,
  SCALE_FACTOR_250P,
  SCALE_FACTOR_300P,
} cef_scale_factor_t;




typedef enum {



  PLUGIN_POLICY_ALLOW,





  PLUGIN_POLICY_DETECT_IMPORTANT,




  PLUGIN_POLICY_BLOCK,




  PLUGIN_POLICY_DISABLE,
} cef_plugin_policy_t;







typedef enum {




  REFERRER_POLICY_CLEAR_REFERRER_ON_TRANSITION_FROM_SECURE_TO_INSECURE,
  REFERRER_POLICY_DEFAULT =
      REFERRER_POLICY_CLEAR_REFERRER_ON_TRANSITION_FROM_SECURE_TO_INSECURE,
  REFERRER_POLICY_REDUCE_REFERRER_GRANULARITY_ON_TRANSITION_CROSS_ORIGIN,





  REFERRER_POLICY_ORIGIN_ONLY_ON_TRANSITION_CROSS_ORIGIN,




  REFERRER_POLICY_NEVER_CLEAR_REFERRER,




  REFERRER_POLICY_ORIGIN,





  REFERRER_POLICY_CLEAR_REFERRER_ON_TRANSITION_CROSS_ORIGIN,





  REFERRER_POLICY_ORIGIN_CLEAR_ON_TRANSITION_FROM_SECURE_TO_INSECURE,




  REFERRER_POLICY_NO_REFERRER,


  REFERRER_POLICY_LAST_VALUE,
} cef_referrer_policy_t;




typedef enum {




  RESPONSE_FILTER_NEED_MORE_DATA,





  RESPONSE_FILTER_DONE,




  RESPONSE_FILTER_ERROR
} cef_response_filter_status_t;




typedef enum {



  CEF_COLOR_TYPE_RGBA_8888,




  CEF_COLOR_TYPE_BGRA_8888,
} cef_color_type_t;




typedef enum {



  CEF_ALPHA_TYPE_OPAQUE,




  CEF_ALPHA_TYPE_PREMULTIPLIED,




  CEF_ALPHA_TYPE_POSTMULTIPLIED,
} cef_alpha_type_t;




typedef enum {
  CEF_TEXT_STYLE_BOLD,
  CEF_TEXT_STYLE_ITALIC,
  CEF_TEXT_STYLE_STRIKE,
  CEF_TEXT_STYLE_DIAGONAL_STRIKE,
  CEF_TEXT_STYLE_UNDERLINE,
} cef_text_style_t;





typedef enum {



  CEF_MAIN_AXIS_ALIGNMENT_START,




  CEF_MAIN_AXIS_ALIGNMENT_CENTER,




  CEF_MAIN_AXIS_ALIGNMENT_END,
} cef_main_axis_alignment_t;





typedef enum {



  CEF_CROSS_AXIS_ALIGNMENT_STRETCH,




  CEF_CROSS_AXIS_ALIGNMENT_START,




  CEF_CROSS_AXIS_ALIGNMENT_CENTER,




  CEF_CROSS_AXIS_ALIGNMENT_END,
} cef_cross_axis_alignment_t;




typedef struct _cef_box_layout_settings_t {




  int horizontal;





  int inside_border_horizontal_spacing;





  int inside_border_vertical_spacing;




  cef_insets_t inside_border_insets;




  int between_child_spacing;




  cef_main_axis_alignment_t main_axis_alignment;




  cef_cross_axis_alignment_t cross_axis_alignment;




  int minimum_cross_axis_size;
  int default_flex;
} cef_box_layout_settings_t;




typedef enum {
  CEF_BUTTON_STATE_NORMAL,
  CEF_BUTTON_STATE_HOVERED,
  CEF_BUTTON_STATE_PRESSED,
  CEF_BUTTON_STATE_DISABLED,
} cef_button_state_t;




typedef enum {



  CEF_HORIZONTAL_ALIGNMENT_LEFT,




  CEF_HORIZONTAL_ALIGNMENT_CENTER,




  CEF_HORIZONTAL_ALIGNMENT_RIGHT,
} cef_horizontal_alignment_t;





typedef enum {
  CEF_MENU_ANCHOR_TOPLEFT,
  CEF_MENU_ANCHOR_TOPRIGHT,
  CEF_MENU_ANCHOR_BOTTOMCENTER,
} cef_menu_anchor_position_t;




typedef enum {
  CEF_MENU_COLOR_TEXT,
  CEF_MENU_COLOR_TEXT_HOVERED,
  CEF_MENU_COLOR_TEXT_ACCELERATOR,
  CEF_MENU_COLOR_TEXT_ACCELERATOR_HOVERED,
  CEF_MENU_COLOR_BACKGROUND,
  CEF_MENU_COLOR_BACKGROUND_HOVERED,
  CEF_MENU_COLOR_COUNT,
} cef_menu_color_type_t;



typedef enum {
  SSL_CONNECTION_VERSION_UNKNOWN = 0,
  SSL_CONNECTION_VERSION_SSL2 = 1,
  SSL_CONNECTION_VERSION_SSL3 = 2,
  SSL_CONNECTION_VERSION_TLS1 = 3,
  SSL_CONNECTION_VERSION_TLS1_1 = 4,
  SSL_CONNECTION_VERSION_TLS1_2 = 5,

  SSL_CONNECTION_VERSION_QUIC = 7,
} cef_ssl_version_t;



typedef enum {
  SSL_CONTENT_NORMAL_CONTENT = 0,
  SSL_CONTENT_DISPLAYED_INSECURE_CONTENT = 1 << 0,
  SSL_CONTENT_RAN_INSECURE_CONTENT = 1 << 1,
} cef_ssl_content_status_t;




typedef enum {



  CEF_CDM_REGISTRATION_ERROR_NONE,




  CEF_CDM_REGISTRATION_ERROR_INCORRECT_CONTENTS,




  CEF_CDM_REGISTRATION_ERROR_INCOMPATIBLE,




  CEF_CDM_REGISTRATION_ERROR_NOT_SUPPORTED,
} cef_cdm_registration_error_t;






typedef struct _cef_composition_underline_t {



  cef_range_t range;




  cef_color_t color;




  cef_color_t background_color;




  int thick;
} cef_composition_underline_t;
typedef struct _cef_base_ref_counted_t {



  size_t size;





  void(__attribute__((__stdcall__))* add_ref)(struct _cef_base_ref_counted_t* self);






  int(__attribute__((__stdcall__))* release)(struct _cef_base_ref_counted_t* self);




  int(__attribute__((__stdcall__))* has_one_ref)(struct _cef_base_ref_counted_t* self);
} cef_base_ref_counted_t;




typedef struct _cef_base_scoped_t {



  size_t size;




  void(__attribute__((__stdcall__))* del)(struct _cef_base_scoped_t* self);

} cef_base_scoped_t;





struct _cef_binary_value_t;
struct _cef_dictionary_value_t;
struct _cef_list_value_t;






typedef struct _cef_value_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* is_valid)(struct _cef_value_t* self);




  int(__attribute__((__stdcall__))* is_owned)(struct _cef_value_t* self);





  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_value_t* self);






  int(__attribute__((__stdcall__))* is_same)(struct _cef_value_t* self,
                             struct _cef_value_t* that);





  int(__attribute__((__stdcall__))* is_equal)(struct _cef_value_t* self,
                              struct _cef_value_t* that);




  struct _cef_value_t*(__attribute__((__stdcall__))* copy)(struct _cef_value_t* self);




  cef_value_type_t(__attribute__((__stdcall__))* get_type)(struct _cef_value_t* self);




  int(__attribute__((__stdcall__))* get_bool)(struct _cef_value_t* self);




  int(__attribute__((__stdcall__))* get_int)(struct _cef_value_t* self);




  double(__attribute__((__stdcall__))* get_double)(struct _cef_value_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_string)(struct _cef_value_t* self);
  struct _cef_binary_value_t*(__attribute__((__stdcall__))* get_binary)(
      struct _cef_value_t* self);
  struct _cef_dictionary_value_t*(__attribute__((__stdcall__))* get_dictionary)(
      struct _cef_value_t* self);
  struct _cef_list_value_t*(__attribute__((__stdcall__))* get_list)(struct _cef_value_t* self);





  int(__attribute__((__stdcall__))* set_null)(struct _cef_value_t* self);





  int(__attribute__((__stdcall__))* set_bool)(struct _cef_value_t* self, int value);





  int(__attribute__((__stdcall__))* set_int)(struct _cef_value_t* self, int value);





  int(__attribute__((__stdcall__))* set_double)(struct _cef_value_t* self, double value);





  int(__attribute__((__stdcall__))* set_string)(struct _cef_value_t* self,
                                const cef_string_t* value);






  int(__attribute__((__stdcall__))* set_binary)(struct _cef_value_t* self,
                                struct _cef_binary_value_t* value);






  int(__attribute__((__stdcall__))* set_dictionary)(struct _cef_value_t* self,
                                    struct _cef_dictionary_value_t* value);






  int(__attribute__((__stdcall__))* set_list)(struct _cef_value_t* self,
                              struct _cef_list_value_t* value);
} cef_value_t;




__attribute__((visibility("default"))) cef_value_t* cef_value_create();




typedef struct _cef_binary_value_t {



  cef_base_ref_counted_t base;







  int(__attribute__((__stdcall__))* is_valid)(struct _cef_binary_value_t* self);




  int(__attribute__((__stdcall__))* is_owned)(struct _cef_binary_value_t* self);





  int(__attribute__((__stdcall__))* is_same)(struct _cef_binary_value_t* self,
                             struct _cef_binary_value_t* that);





  int(__attribute__((__stdcall__))* is_equal)(struct _cef_binary_value_t* self,
                              struct _cef_binary_value_t* that);




  struct _cef_binary_value_t*(__attribute__((__stdcall__))* copy)(
      struct _cef_binary_value_t* self);




  size_t(__attribute__((__stdcall__))* get_size)(struct _cef_binary_value_t* self);





  size_t(__attribute__((__stdcall__))* get_data)(struct _cef_binary_value_t* self,
                                 void* buffer,
                                 size_t buffer_size,
                                 size_t data_offset);
} cef_binary_value_t;





__attribute__((visibility("default"))) cef_binary_value_t* cef_binary_value_create(const void* data,
                                                       size_t data_size);





typedef struct _cef_dictionary_value_t {



  cef_base_ref_counted_t base;







  int(__attribute__((__stdcall__))* is_valid)(struct _cef_dictionary_value_t* self);




  int(__attribute__((__stdcall__))* is_owned)(struct _cef_dictionary_value_t* self);





  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_dictionary_value_t* self);






  int(__attribute__((__stdcall__))* is_same)(struct _cef_dictionary_value_t* self,
                             struct _cef_dictionary_value_t* that);





  int(__attribute__((__stdcall__))* is_equal)(struct _cef_dictionary_value_t* self,
                              struct _cef_dictionary_value_t* that);





  struct _cef_dictionary_value_t*(__attribute__((__stdcall__))* copy)(
      struct _cef_dictionary_value_t* self,
      int exclude_empty_children);




  size_t(__attribute__((__stdcall__))* get_size)(struct _cef_dictionary_value_t* self);




  int(__attribute__((__stdcall__))* clear)(struct _cef_dictionary_value_t* self);




  int(__attribute__((__stdcall__))* has_key)(struct _cef_dictionary_value_t* self,
                             const cef_string_t* key);




  int(__attribute__((__stdcall__))* get_keys)(struct _cef_dictionary_value_t* self,
                              cef_string_list_t keys);





  int(__attribute__((__stdcall__))* remove)(struct _cef_dictionary_value_t* self,
                            const cef_string_t* key);




  cef_value_type_t(__attribute__((__stdcall__))* get_type)(struct _cef_dictionary_value_t* self,
                                           const cef_string_t* key);
  struct _cef_value_t*(__attribute__((__stdcall__))* get_value)(
      struct _cef_dictionary_value_t* self,
      const cef_string_t* key);




  int(__attribute__((__stdcall__))* get_bool)(struct _cef_dictionary_value_t* self,
                              const cef_string_t* key);




  int(__attribute__((__stdcall__))* get_int)(struct _cef_dictionary_value_t* self,
                             const cef_string_t* key);




  double(__attribute__((__stdcall__))* get_double)(struct _cef_dictionary_value_t* self,
                                   const cef_string_t* key);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_string)(
      struct _cef_dictionary_value_t* self,
      const cef_string_t* key);





  struct _cef_binary_value_t*(__attribute__((__stdcall__))* get_binary)(
      struct _cef_dictionary_value_t* self,
      const cef_string_t* key);






  struct _cef_dictionary_value_t*(__attribute__((__stdcall__))* get_dictionary)(
      struct _cef_dictionary_value_t* self,
      const cef_string_t* key);






  struct _cef_list_value_t*(__attribute__((__stdcall__))* get_list)(
      struct _cef_dictionary_value_t* self,
      const cef_string_t* key);
  int(__attribute__((__stdcall__))* set_value)(struct _cef_dictionary_value_t* self,
                               const cef_string_t* key,
                               struct _cef_value_t* value);





  int(__attribute__((__stdcall__))* set_null)(struct _cef_dictionary_value_t* self,
                              const cef_string_t* key);





  int(__attribute__((__stdcall__))* set_bool)(struct _cef_dictionary_value_t* self,
                              const cef_string_t* key,
                              int value);





  int(__attribute__((__stdcall__))* set_int)(struct _cef_dictionary_value_t* self,
                             const cef_string_t* key,
                             int value);





  int(__attribute__((__stdcall__))* set_double)(struct _cef_dictionary_value_t* self,
                                const cef_string_t* key,
                                double value);





  int(__attribute__((__stdcall__))* set_string)(struct _cef_dictionary_value_t* self,
                                const cef_string_t* key,
                                const cef_string_t* value);
  int(__attribute__((__stdcall__))* set_binary)(struct _cef_dictionary_value_t* self,
                                const cef_string_t* key,
                                struct _cef_binary_value_t* value);
  int(__attribute__((__stdcall__))* set_dictionary)(struct _cef_dictionary_value_t* self,
                                    const cef_string_t* key,
                                    struct _cef_dictionary_value_t* value);
  int(__attribute__((__stdcall__))* set_list)(struct _cef_dictionary_value_t* self,
                              const cef_string_t* key,
                              struct _cef_list_value_t* value);
} cef_dictionary_value_t;




__attribute__((visibility("default"))) cef_dictionary_value_t* cef_dictionary_value_create();




typedef struct _cef_list_value_t {



  cef_base_ref_counted_t base;







  int(__attribute__((__stdcall__))* is_valid)(struct _cef_list_value_t* self);




  int(__attribute__((__stdcall__))* is_owned)(struct _cef_list_value_t* self);





  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_list_value_t* self);






  int(__attribute__((__stdcall__))* is_same)(struct _cef_list_value_t* self,
                             struct _cef_list_value_t* that);





  int(__attribute__((__stdcall__))* is_equal)(struct _cef_list_value_t* self,
                              struct _cef_list_value_t* that);




  struct _cef_list_value_t*(__attribute__((__stdcall__))* copy)(struct _cef_list_value_t* self);





  int(__attribute__((__stdcall__))* set_size)(struct _cef_list_value_t* self, size_t size);




  size_t(__attribute__((__stdcall__))* get_size)(struct _cef_list_value_t* self);




  int(__attribute__((__stdcall__))* clear)(struct _cef_list_value_t* self);




  int(__attribute__((__stdcall__))* remove)(struct _cef_list_value_t* self, size_t index);




  cef_value_type_t(__attribute__((__stdcall__))* get_type)(struct _cef_list_value_t* self,
                                           size_t index);
  struct _cef_value_t*(__attribute__((__stdcall__))* get_value)(struct _cef_list_value_t* self,
                                                size_t index);




  int(__attribute__((__stdcall__))* get_bool)(struct _cef_list_value_t* self, size_t index);




  int(__attribute__((__stdcall__))* get_int)(struct _cef_list_value_t* self, size_t index);




  double(__attribute__((__stdcall__))* get_double)(struct _cef_list_value_t* self,
                                   size_t index);





  cef_string_userfree_t(
      __attribute__((__stdcall__))* get_string)(struct _cef_list_value_t* self, size_t index);





  struct _cef_binary_value_t*(
      __attribute__((__stdcall__))* get_binary)(struct _cef_list_value_t* self, size_t index);






  struct _cef_dictionary_value_t*(__attribute__((__stdcall__))* get_dictionary)(
      struct _cef_list_value_t* self,
      size_t index);






  struct _cef_list_value_t*(
      __attribute__((__stdcall__))* get_list)(struct _cef_list_value_t* self, size_t index);
  int(__attribute__((__stdcall__))* set_value)(struct _cef_list_value_t* self,
                               size_t index,
                               struct _cef_value_t* value);





  int(__attribute__((__stdcall__))* set_null)(struct _cef_list_value_t* self, size_t index);





  int(__attribute__((__stdcall__))* set_bool)(struct _cef_list_value_t* self,
                              size_t index,
                              int value);





  int(__attribute__((__stdcall__))* set_int)(struct _cef_list_value_t* self,
                             size_t index,
                             int value);





  int(__attribute__((__stdcall__))* set_double)(struct _cef_list_value_t* self,
                                size_t index,
                                double value);





  int(__attribute__((__stdcall__))* set_string)(struct _cef_list_value_t* self,
                                size_t index,
                                const cef_string_t* value);
  int(__attribute__((__stdcall__))* set_binary)(struct _cef_list_value_t* self,
                                size_t index,
                                struct _cef_binary_value_t* value);
  int(__attribute__((__stdcall__))* set_dictionary)(struct _cef_list_value_t* self,
                                    size_t index,
                                    struct _cef_dictionary_value_t* value);
  int(__attribute__((__stdcall__))* set_list)(struct _cef_list_value_t* self,
                              size_t index,
                              struct _cef_list_value_t* value);
} cef_list_value_t;




__attribute__((visibility("default"))) cef_list_value_t* cef_list_value_create();
typedef struct _cef_accessibility_handler_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* on_accessibility_tree_change)(
      struct _cef_accessibility_handler_t* self,
      struct _cef_value_t* value);





  void(__attribute__((__stdcall__))* on_accessibility_location_change)(
      struct _cef_accessibility_handler_t* self,
      struct _cef_value_t* value);
} cef_accessibility_handler_t;







typedef struct _cef_command_line_t {



  cef_base_ref_counted_t base;





  int(__attribute__((__stdcall__))* is_valid)(struct _cef_command_line_t* self);





  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_command_line_t* self);




  struct _cef_command_line_t*(__attribute__((__stdcall__))* copy)(
      struct _cef_command_line_t* self);






  void(__attribute__((__stdcall__))* init_from_argv)(struct _cef_command_line_t* self,
                                     int argc,
                                     const char* const* argv);





  void(__attribute__((__stdcall__))* init_from_string)(struct _cef_command_line_t* self,
                                       const cef_string_t* command_line);





  void(__attribute__((__stdcall__))* reset)(struct _cef_command_line_t* self);





  void(__attribute__((__stdcall__))* get_argv)(struct _cef_command_line_t* self,
                               cef_string_list_t argv);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_command_line_string)(
      struct _cef_command_line_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_program)(
      struct _cef_command_line_t* self);




  void(__attribute__((__stdcall__))* set_program)(struct _cef_command_line_t* self,
                                  const cef_string_t* program);




  int(__attribute__((__stdcall__))* has_switches)(struct _cef_command_line_t* self);




  int(__attribute__((__stdcall__))* has_switch)(struct _cef_command_line_t* self,
                                const cef_string_t* name);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_switch_value)(
      struct _cef_command_line_t* self,
      const cef_string_t* name);





  void(__attribute__((__stdcall__))* get_switches)(struct _cef_command_line_t* self,
                                   cef_string_map_t switches);





  void(__attribute__((__stdcall__))* append_switch)(struct _cef_command_line_t* self,
                                    const cef_string_t* name);




  void(__attribute__((__stdcall__))* append_switch_with_value)(struct _cef_command_line_t* self,
                                               const cef_string_t* name,
                                               const cef_string_t* value);




  int(__attribute__((__stdcall__))* has_arguments)(struct _cef_command_line_t* self);




  void(__attribute__((__stdcall__))* get_arguments)(struct _cef_command_line_t* self,
                                    cef_string_list_t arguments);




  void(__attribute__((__stdcall__))* append_argument)(struct _cef_command_line_t* self,
                                      const cef_string_t* argument);





  void(__attribute__((__stdcall__))* prepend_wrapper)(struct _cef_command_line_t* self,
                                      const cef_string_t* wrapper);
} cef_command_line_t;




__attribute__((visibility("default"))) cef_command_line_t* cef_command_line_create();





__attribute__((visibility("default"))) cef_command_line_t* cef_command_line_get_global();










typedef struct _cef_image_t {



  cef_base_ref_counted_t base;




  int(__attribute__((__stdcall__))* is_empty)(struct _cef_image_t* self);





  int(__attribute__((__stdcall__))* is_same)(struct _cef_image_t* self,
                             struct _cef_image_t* that);
  int(__attribute__((__stdcall__))* add_bitmap)(struct _cef_image_t* self,
                                float scale_factor,
                                int pixel_width,
                                int pixel_height,
                                cef_color_type_t color_type,
                                cef_alpha_type_t alpha_type,
                                const void* pixel_data,
                                size_t pixel_data_size);






  int(__attribute__((__stdcall__))* add_png)(struct _cef_image_t* self,
                             float scale_factor,
                             const void* png_data,
                             size_t png_data_size);






  int(__attribute__((__stdcall__))* add_jpeg)(struct _cef_image_t* self,
                              float scale_factor,
                              const void* jpeg_data,
                              size_t jpeg_data_size);




  size_t(__attribute__((__stdcall__))* get_width)(struct _cef_image_t* self);




  size_t(__attribute__((__stdcall__))* get_height)(struct _cef_image_t* self);





  int(__attribute__((__stdcall__))* has_representation)(struct _cef_image_t* self,
                                        float scale_factor);




  int(__attribute__((__stdcall__))* remove_representation)(struct _cef_image_t* self,
                                           float scale_factor);







  int(__attribute__((__stdcall__))* get_representation_info)(struct _cef_image_t* self,
                                             float scale_factor,
                                             float* actual_scale_factor,
                                             int* pixel_width,
                                             int* pixel_height);
  struct _cef_binary_value_t*(__attribute__((__stdcall__))* get_as_bitmap)(
      struct _cef_image_t* self,
      float scale_factor,
      cef_color_type_t color_type,
      cef_alpha_type_t alpha_type,
      int* pixel_width,
      int* pixel_height);
  struct _cef_binary_value_t*(__attribute__((__stdcall__))* get_as_png)(
      struct _cef_image_t* self,
      float scale_factor,
      int with_transparency,
      int* pixel_width,
      int* pixel_height);
  struct _cef_binary_value_t*(__attribute__((__stdcall__))* get_as_jpeg)(
      struct _cef_image_t* self,
      float scale_factor,
      int quality,
      int* pixel_width,
      int* pixel_height);
} cef_image_t;





__attribute__((visibility("default"))) cef_image_t* cef_image_create();

typedef struct _cef_read_handler_t {



  cef_base_ref_counted_t base;




  size_t(__attribute__((__stdcall__))* read)(struct _cef_read_handler_t* self,
                             void* ptr,
                             size_t size,
                             size_t n);





  int(__attribute__((__stdcall__))* seek)(struct _cef_read_handler_t* self,
                          int64 offset,
                          int whence);




  int64(__attribute__((__stdcall__))* tell)(struct _cef_read_handler_t* self);




  int(__attribute__((__stdcall__))* eof)(struct _cef_read_handler_t* self);






  int(__attribute__((__stdcall__))* may_block)(struct _cef_read_handler_t* self);
} cef_read_handler_t;





typedef struct _cef_stream_reader_t {



  cef_base_ref_counted_t base;




  size_t(__attribute__((__stdcall__))* read)(struct _cef_stream_reader_t* self,
                             void* ptr,
                             size_t size,
                             size_t n);





  int(__attribute__((__stdcall__))* seek)(struct _cef_stream_reader_t* self,
                          int64 offset,
                          int whence);




  int64(__attribute__((__stdcall__))* tell)(struct _cef_stream_reader_t* self);




  int(__attribute__((__stdcall__))* eof)(struct _cef_stream_reader_t* self);






  int(__attribute__((__stdcall__))* may_block)(struct _cef_stream_reader_t* self);
} cef_stream_reader_t;




__attribute__((visibility("default"))) cef_stream_reader_t* cef_stream_reader_create_for_file(
    const cef_string_t* fileName);




__attribute__((visibility("default"))) cef_stream_reader_t* cef_stream_reader_create_for_data(void* data,
                                                                  size_t size);




__attribute__((visibility("default"))) cef_stream_reader_t* cef_stream_reader_create_for_handler(
    cef_read_handler_t* handler);





typedef struct _cef_write_handler_t {



  cef_base_ref_counted_t base;




  size_t(__attribute__((__stdcall__))* write)(struct _cef_write_handler_t* self,
                              const void* ptr,
                              size_t size,
                              size_t n);





  int(__attribute__((__stdcall__))* seek)(struct _cef_write_handler_t* self,
                          int64 offset,
                          int whence);




  int64(__attribute__((__stdcall__))* tell)(struct _cef_write_handler_t* self);




  int(__attribute__((__stdcall__))* flush)(struct _cef_write_handler_t* self);






  int(__attribute__((__stdcall__))* may_block)(struct _cef_write_handler_t* self);
} cef_write_handler_t;





typedef struct _cef_stream_writer_t {



  cef_base_ref_counted_t base;




  size_t(__attribute__((__stdcall__))* write)(struct _cef_stream_writer_t* self,
                              const void* ptr,
                              size_t size,
                              size_t n);





  int(__attribute__((__stdcall__))* seek)(struct _cef_stream_writer_t* self,
                          int64 offset,
                          int whence);




  int64(__attribute__((__stdcall__))* tell)(struct _cef_stream_writer_t* self);




  int(__attribute__((__stdcall__))* flush)(struct _cef_stream_writer_t* self);






  int(__attribute__((__stdcall__))* may_block)(struct _cef_stream_writer_t* self);
} cef_stream_writer_t;




__attribute__((visibility("default"))) cef_stream_writer_t* cef_stream_writer_create_for_file(
    const cef_string_t* fileName);




__attribute__((visibility("default"))) cef_stream_writer_t* cef_stream_writer_create_for_handler(
    cef_write_handler_t* handler);
typedef struct _cef_drag_data_t {



  cef_base_ref_counted_t base;




  struct _cef_drag_data_t*(__attribute__((__stdcall__))* clone)(struct _cef_drag_data_t* self);




  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_drag_data_t* self);




  int(__attribute__((__stdcall__))* is_link)(struct _cef_drag_data_t* self);




  int(__attribute__((__stdcall__))* is_fragment)(struct _cef_drag_data_t* self);




  int(__attribute__((__stdcall__))* is_file)(struct _cef_drag_data_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_link_url)(
      struct _cef_drag_data_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_link_title)(
      struct _cef_drag_data_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_link_metadata)(
      struct _cef_drag_data_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_fragment_text)(
      struct _cef_drag_data_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_fragment_html)(
      struct _cef_drag_data_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_fragment_base_url)(
      struct _cef_drag_data_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_file_name)(
      struct _cef_drag_data_t* self);







  size_t(__attribute__((__stdcall__))* get_file_contents)(struct _cef_drag_data_t* self,
                                          struct _cef_stream_writer_t* writer);





  int(__attribute__((__stdcall__))* get_file_names)(struct _cef_drag_data_t* self,
                                    cef_string_list_t names);




  void(__attribute__((__stdcall__))* set_link_url)(struct _cef_drag_data_t* self,
                                   const cef_string_t* url);




  void(__attribute__((__stdcall__))* set_link_title)(struct _cef_drag_data_t* self,
                                     const cef_string_t* title);




  void(__attribute__((__stdcall__))* set_link_metadata)(struct _cef_drag_data_t* self,
                                        const cef_string_t* data);




  void(__attribute__((__stdcall__))* set_fragment_text)(struct _cef_drag_data_t* self,
                                        const cef_string_t* text);




  void(__attribute__((__stdcall__))* set_fragment_html)(struct _cef_drag_data_t* self,
                                        const cef_string_t* html);




  void(__attribute__((__stdcall__))* set_fragment_base_url)(struct _cef_drag_data_t* self,
                                            const cef_string_t* base_url);






  void(__attribute__((__stdcall__))* reset_file_contents)(struct _cef_drag_data_t* self);




  void(__attribute__((__stdcall__))* add_file)(struct _cef_drag_data_t* self,
                               const cef_string_t* path,
                               const cef_string_t* display_name);





  struct _cef_image_t*(__attribute__((__stdcall__))* get_image)(struct _cef_drag_data_t* self);




  cef_point_t(__attribute__((__stdcall__))* get_image_hotspot)(struct _cef_drag_data_t* self);




  int(__attribute__((__stdcall__))* has_image)(struct _cef_drag_data_t* self);
} cef_drag_data_t;




__attribute__((visibility("default"))) cef_drag_data_t* cef_drag_data_create();











struct _cef_domdocument_t;
struct _cef_domnode_t;





typedef struct _cef_domvisitor_t {



  cef_base_ref_counted_t base;
  void(__attribute__((__stdcall__))* visit)(struct _cef_domvisitor_t* self,
                            struct _cef_domdocument_t* document);
} cef_domvisitor_t;





typedef struct _cef_domdocument_t {



  cef_base_ref_counted_t base;




  cef_dom_document_type_t(__attribute__((__stdcall__))* get_type)(
      struct _cef_domdocument_t* self);




  struct _cef_domnode_t*(__attribute__((__stdcall__))* get_document)(
      struct _cef_domdocument_t* self);




  struct _cef_domnode_t*(__attribute__((__stdcall__))* get_body)(
      struct _cef_domdocument_t* self);




  struct _cef_domnode_t*(__attribute__((__stdcall__))* get_head)(
      struct _cef_domdocument_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_title)(
      struct _cef_domdocument_t* self);




  struct _cef_domnode_t*(__attribute__((__stdcall__))* get_element_by_id)(
      struct _cef_domdocument_t* self,
      const cef_string_t* id);




  struct _cef_domnode_t*(__attribute__((__stdcall__))* get_focused_node)(
      struct _cef_domdocument_t* self);




  int(__attribute__((__stdcall__))* has_selection)(struct _cef_domdocument_t* self);




  int(__attribute__((__stdcall__))* get_selection_start_offset)(
      struct _cef_domdocument_t* self);




  int(__attribute__((__stdcall__))* get_selection_end_offset)(struct _cef_domdocument_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_selection_as_markup)(
      struct _cef_domdocument_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_selection_as_text)(
      struct _cef_domdocument_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_base_url)(
      struct _cef_domdocument_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_complete_url)(
      struct _cef_domdocument_t* self,
      const cef_string_t* partialURL);
} cef_domdocument_t;





typedef struct _cef_domnode_t {



  cef_base_ref_counted_t base;




  cef_dom_node_type_t(__attribute__((__stdcall__))* get_type)(struct _cef_domnode_t* self);




  int(__attribute__((__stdcall__))* is_text)(struct _cef_domnode_t* self);




  int(__attribute__((__stdcall__))* is_element)(struct _cef_domnode_t* self);




  int(__attribute__((__stdcall__))* is_editable)(struct _cef_domnode_t* self);




  int(__attribute__((__stdcall__))* is_form_control_element)(struct _cef_domnode_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_form_control_element_type)(
      struct _cef_domnode_t* self);





  int(__attribute__((__stdcall__))* is_same)(struct _cef_domnode_t* self,
                             struct _cef_domnode_t* that);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_name)(struct _cef_domnode_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_value)(struct _cef_domnode_t* self);




  int(__attribute__((__stdcall__))* set_value)(struct _cef_domnode_t* self,
                               const cef_string_t* value);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_as_markup)(
      struct _cef_domnode_t* self);




  struct _cef_domdocument_t*(__attribute__((__stdcall__))* get_document)(
      struct _cef_domnode_t* self);




  struct _cef_domnode_t*(__attribute__((__stdcall__))* get_parent)(struct _cef_domnode_t* self);




  struct _cef_domnode_t*(__attribute__((__stdcall__))* get_previous_sibling)(
      struct _cef_domnode_t* self);




  struct _cef_domnode_t*(__attribute__((__stdcall__))* get_next_sibling)(
      struct _cef_domnode_t* self);




  int(__attribute__((__stdcall__))* has_children)(struct _cef_domnode_t* self);




  struct _cef_domnode_t*(__attribute__((__stdcall__))* get_first_child)(
      struct _cef_domnode_t* self);




  struct _cef_domnode_t*(__attribute__((__stdcall__))* get_last_child)(
      struct _cef_domnode_t* self);







  cef_string_userfree_t(__attribute__((__stdcall__))* get_element_tag_name)(
      struct _cef_domnode_t* self);




  int(__attribute__((__stdcall__))* has_element_attributes)(struct _cef_domnode_t* self);




  int(__attribute__((__stdcall__))* has_element_attribute)(struct _cef_domnode_t* self,
                                           const cef_string_t* attrName);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_element_attribute)(
      struct _cef_domnode_t* self,
      const cef_string_t* attrName);




  void(__attribute__((__stdcall__))* get_element_attributes)(struct _cef_domnode_t* self,
                                             cef_string_map_t attrMap);





  int(__attribute__((__stdcall__))* set_element_attribute)(struct _cef_domnode_t* self,
                                           const cef_string_t* attrName,
                                           const cef_string_t* value);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_element_inner_text)(
      struct _cef_domnode_t* self);




  cef_rect_t(__attribute__((__stdcall__))* get_element_bounds)(struct _cef_domnode_t* self);
} cef_domnode_t;








struct _cef_post_data_element_t;
struct _cef_post_data_t;





typedef struct _cef_request_t {



  cef_base_ref_counted_t base;




  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_request_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_url)(struct _cef_request_t* self);




  void(__attribute__((__stdcall__))* set_url)(struct _cef_request_t* self,
                              const cef_string_t* url);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_method)(struct _cef_request_t* self);




  void(__attribute__((__stdcall__))* set_method)(struct _cef_request_t* self,
                                 const cef_string_t* method);






  void(__attribute__((__stdcall__))* set_referrer)(struct _cef_request_t* self,
                                   const cef_string_t* referrer_url,
                                   cef_referrer_policy_t policy);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_referrer_url)(
      struct _cef_request_t* self);




  cef_referrer_policy_t(__attribute__((__stdcall__))* get_referrer_policy)(
      struct _cef_request_t* self);




  struct _cef_post_data_t*(__attribute__((__stdcall__))* get_post_data)(
      struct _cef_request_t* self);




  void(__attribute__((__stdcall__))* set_post_data)(struct _cef_request_t* self,
                                    struct _cef_post_data_t* postData);




  void(__attribute__((__stdcall__))* get_header_map)(struct _cef_request_t* self,
                                     cef_string_multimap_t headerMap);





  void(__attribute__((__stdcall__))* set_header_map)(struct _cef_request_t* self,
                                     cef_string_multimap_t headerMap);




  void(__attribute__((__stdcall__))* set)(struct _cef_request_t* self,
                          const cef_string_t* url,
                          const cef_string_t* method,
                          struct _cef_post_data_t* postData,
                          cef_string_multimap_t headerMap);





  int(__attribute__((__stdcall__))* get_flags)(struct _cef_request_t* self);





  void(__attribute__((__stdcall__))* set_flags)(struct _cef_request_t* self, int flags);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_first_party_for_cookies)(
      struct _cef_request_t* self);





  void(__attribute__((__stdcall__))* set_first_party_for_cookies)(struct _cef_request_t* self,
                                                  const cef_string_t* url);





  cef_resource_type_t(__attribute__((__stdcall__))* get_resource_type)(
      struct _cef_request_t* self);






  cef_transition_type_t(__attribute__((__stdcall__))* get_transition_type)(
      struct _cef_request_t* self);






  uint64(__attribute__((__stdcall__))* get_identifier)(struct _cef_request_t* self);
} cef_request_t;




__attribute__((visibility("default"))) cef_request_t* cef_request_create();





typedef struct _cef_post_data_t {



  cef_base_ref_counted_t base;




  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_post_data_t* self);







  int(__attribute__((__stdcall__))* has_excluded_elements)(struct _cef_post_data_t* self);




  size_t(__attribute__((__stdcall__))* get_element_count)(struct _cef_post_data_t* self);




  void(__attribute__((__stdcall__))* get_elements)(struct _cef_post_data_t* self,
                                   size_t* elementsCount,
                                   struct _cef_post_data_element_t** elements);





  int(__attribute__((__stdcall__))* remove_element)(struct _cef_post_data_t* self,
                                    struct _cef_post_data_element_t* element);




  int(__attribute__((__stdcall__))* add_element)(struct _cef_post_data_t* self,
                                 struct _cef_post_data_element_t* element);




  void(__attribute__((__stdcall__))* remove_elements)(struct _cef_post_data_t* self);
} cef_post_data_t;




__attribute__((visibility("default"))) cef_post_data_t* cef_post_data_create();





typedef struct _cef_post_data_element_t {



  cef_base_ref_counted_t base;




  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_post_data_element_t* self);




  void(__attribute__((__stdcall__))* set_to_empty)(struct _cef_post_data_element_t* self);




  void(__attribute__((__stdcall__))* set_to_file)(struct _cef_post_data_element_t* self,
                                  const cef_string_t* fileName);





  void(__attribute__((__stdcall__))* set_to_bytes)(struct _cef_post_data_element_t* self,
                                   size_t size,
                                   const void* bytes);




  cef_postdataelement_type_t(__attribute__((__stdcall__))* get_type)(
      struct _cef_post_data_element_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_file)(
      struct _cef_post_data_element_t* self);




  size_t(__attribute__((__stdcall__))* get_bytes_count)(struct _cef_post_data_element_t* self);





  size_t(__attribute__((__stdcall__))* get_bytes)(struct _cef_post_data_element_t* self,
                                  size_t size,
                                  void* bytes);
} cef_post_data_element_t;




__attribute__((visibility("default"))) cef_post_data_element_t* cef_post_data_element_create();


typedef struct _cef_string_visitor_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* visit)(struct _cef_string_visitor_t* self,
                            const cef_string_t* string);
} cef_string_visitor_t;





struct _cef_browser_t;
struct _cef_v8context_t;







typedef struct _cef_frame_t {



  cef_base_ref_counted_t base;




  int(__attribute__((__stdcall__))* is_valid)(struct _cef_frame_t* self);




  void(__attribute__((__stdcall__))* undo)(struct _cef_frame_t* self);




  void(__attribute__((__stdcall__))* redo)(struct _cef_frame_t* self);




  void(__attribute__((__stdcall__))* cut)(struct _cef_frame_t* self);




  void(__attribute__((__stdcall__))* copy)(struct _cef_frame_t* self);




  void(__attribute__((__stdcall__))* paste)(struct _cef_frame_t* self);




  void(__attribute__((__stdcall__))* del)(struct _cef_frame_t* self);




  void(__attribute__((__stdcall__))* select_all)(struct _cef_frame_t* self);






  void(__attribute__((__stdcall__))* view_source)(struct _cef_frame_t* self);





  void(__attribute__((__stdcall__))* get_source)(struct _cef_frame_t* self,
                                 struct _cef_string_visitor_t* visitor);





  void(__attribute__((__stdcall__))* get_text)(struct _cef_frame_t* self,
                               struct _cef_string_visitor_t* visitor);




  void(__attribute__((__stdcall__))* load_request)(struct _cef_frame_t* self,
                                   struct _cef_request_t* request);




  void(__attribute__((__stdcall__))* load_url)(struct _cef_frame_t* self,
                               const cef_string_t* url);






  void(__attribute__((__stdcall__))* load_string)(struct _cef_frame_t* self,
                                  const cef_string_t* string_val,
                                  const cef_string_t* url);
  void(__attribute__((__stdcall__))* execute_java_script)(struct _cef_frame_t* self,
                                          const cef_string_t* code,
                                          const cef_string_t* script_url,
                                          int start_line);




  int(__attribute__((__stdcall__))* is_main)(struct _cef_frame_t* self);




  int(__attribute__((__stdcall__))* is_focused)(struct _cef_frame_t* self);
  cef_string_userfree_t(__attribute__((__stdcall__))* get_name)(struct _cef_frame_t* self);





  int64(__attribute__((__stdcall__))* get_identifier)(struct _cef_frame_t* self);





  struct _cef_frame_t*(__attribute__((__stdcall__))* get_parent)(struct _cef_frame_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_url)(struct _cef_frame_t* self);




  struct _cef_browser_t*(__attribute__((__stdcall__))* get_browser)(struct _cef_frame_t* self);





  struct _cef_v8context_t*(__attribute__((__stdcall__))* get_v8context)(
      struct _cef_frame_t* self);





  void(__attribute__((__stdcall__))* visit_dom)(struct _cef_frame_t* self,
                                struct _cef_domvisitor_t* visitor);
} cef_frame_t;









typedef struct _cef_x509cert_principal_t {



  cef_base_ref_counted_t base;







  cef_string_userfree_t(__attribute__((__stdcall__))* get_display_name)(
      struct _cef_x509cert_principal_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_common_name)(
      struct _cef_x509cert_principal_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_locality_name)(
      struct _cef_x509cert_principal_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_state_or_province_name)(
      struct _cef_x509cert_principal_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_country_name)(
      struct _cef_x509cert_principal_t* self);




  void(__attribute__((__stdcall__))* get_street_addresses)(
      struct _cef_x509cert_principal_t* self,
      cef_string_list_t addresses);




  void(__attribute__((__stdcall__))* get_organization_names)(
      struct _cef_x509cert_principal_t* self,
      cef_string_list_t names);




  void(__attribute__((__stdcall__))* get_organization_unit_names)(
      struct _cef_x509cert_principal_t* self,
      cef_string_list_t names);




  void(__attribute__((__stdcall__))* get_domain_components)(
      struct _cef_x509cert_principal_t* self,
      cef_string_list_t components);
} cef_x509cert_principal_t;




typedef struct _cef_x509certificate_t {



  cef_base_ref_counted_t base;






  struct _cef_x509cert_principal_t*(__attribute__((__stdcall__))* get_subject)(
      struct _cef_x509certificate_t* self);




  struct _cef_x509cert_principal_t*(__attribute__((__stdcall__))* get_issuer)(
      struct _cef_x509certificate_t* self);





  struct _cef_binary_value_t*(__attribute__((__stdcall__))* get_serial_number)(
      struct _cef_x509certificate_t* self);





  cef_time_t(__attribute__((__stdcall__))* get_valid_start)(
      struct _cef_x509certificate_t* self);





  cef_time_t(__attribute__((__stdcall__))* get_valid_expiry)(
      struct _cef_x509certificate_t* self);




  struct _cef_binary_value_t*(__attribute__((__stdcall__))* get_derencoded)(
      struct _cef_x509certificate_t* self);




  struct _cef_binary_value_t*(__attribute__((__stdcall__))* get_pemencoded)(
      struct _cef_x509certificate_t* self);





  size_t(__attribute__((__stdcall__))* get_issuer_chain_size)(
      struct _cef_x509certificate_t* self);






  void(__attribute__((__stdcall__))* get_derencoded_issuer_chain)(
      struct _cef_x509certificate_t* self,
      size_t* chainCount,
      struct _cef_binary_value_t** chain);






  void(__attribute__((__stdcall__))* get_pemencoded_issuer_chain)(
      struct _cef_x509certificate_t* self,
      size_t* chainCount,
      struct _cef_binary_value_t** chain);
} cef_x509certificate_t;
typedef struct _cef_sslstatus_t {



  cef_base_ref_counted_t base;




  int(__attribute__((__stdcall__))* is_secure_connection)(struct _cef_sslstatus_t* self);





  cef_cert_status_t(__attribute__((__stdcall__))* get_cert_status)(
      struct _cef_sslstatus_t* self);




  cef_ssl_version_t(__attribute__((__stdcall__))* get_sslversion)(
      struct _cef_sslstatus_t* self);




  cef_ssl_content_status_t(__attribute__((__stdcall__))* get_content_status)(
      struct _cef_sslstatus_t* self);




  struct _cef_x509certificate_t*(__attribute__((__stdcall__))* get_x509certificate)(
      struct _cef_sslstatus_t* self);
} cef_sslstatus_t;
typedef struct _cef_navigation_entry_t {



  cef_base_ref_counted_t base;





  int(__attribute__((__stdcall__))* is_valid)(struct _cef_navigation_entry_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_url)(
      struct _cef_navigation_entry_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_display_url)(
      struct _cef_navigation_entry_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_original_url)(
      struct _cef_navigation_entry_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_title)(
      struct _cef_navigation_entry_t* self);





  cef_transition_type_t(__attribute__((__stdcall__))* get_transition_type)(
      struct _cef_navigation_entry_t* self);




  int(__attribute__((__stdcall__))* has_post_data)(struct _cef_navigation_entry_t* self);






  cef_time_t(__attribute__((__stdcall__))* get_completion_time)(
      struct _cef_navigation_entry_t* self);






  int(__attribute__((__stdcall__))* get_http_status_code)(struct _cef_navigation_entry_t* self);




  struct _cef_sslstatus_t*(__attribute__((__stdcall__))* get_sslstatus)(
      struct _cef_navigation_entry_t* self);
} cef_navigation_entry_t;

typedef struct _cef_process_message_t {



  cef_base_ref_counted_t base;





  int(__attribute__((__stdcall__))* is_valid)(struct _cef_process_message_t* self);





  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_process_message_t* self);




  struct _cef_process_message_t*(__attribute__((__stdcall__))* copy)(
      struct _cef_process_message_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_name)(
      struct _cef_process_message_t* self);




  struct _cef_list_value_t*(__attribute__((__stdcall__))* get_argument_list)(
      struct _cef_process_message_t* self);
} cef_process_message_t;




__attribute__((visibility("default"))) cef_process_message_t* cef_process_message_create(
    const cef_string_t* name);



typedef struct _cef_callback_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* cont)(struct _cef_callback_t* self);




  void(__attribute__((__stdcall__))* cancel)(struct _cef_callback_t* self);
} cef_callback_t;




typedef struct _cef_completion_callback_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* on_complete)(struct _cef_completion_callback_t* self);
} cef_completion_callback_t;

struct _cef_cookie_visitor_t;
struct _cef_delete_cookies_callback_t;
struct _cef_set_cookie_callback_t;





typedef struct _cef_cookie_manager_t {



  cef_base_ref_counted_t base;







  void(__attribute__((__stdcall__))* set_supported_schemes)(
      struct _cef_cookie_manager_t* self,
      cef_string_list_t schemes,
      struct _cef_completion_callback_t* callback);






  int(__attribute__((__stdcall__))* visit_all_cookies)(struct _cef_cookie_manager_t* self,
                                       struct _cef_cookie_visitor_t* visitor);
  int(__attribute__((__stdcall__))* visit_url_cookies)(struct _cef_cookie_manager_t* self,
                                       const cef_string_t* url,
                                       int includeHttpOnly,
                                       struct _cef_cookie_visitor_t* visitor);
  int(__attribute__((__stdcall__))* set_cookie)(struct _cef_cookie_manager_t* self,
                                const cef_string_t* url,
                                const struct _cef_cookie_t* cookie,
                                struct _cef_set_cookie_callback_t* callback);
  int(__attribute__((__stdcall__))* delete_cookies)(
      struct _cef_cookie_manager_t* self,
      const cef_string_t* url,
      const cef_string_t* cookie_name,
      struct _cef_delete_cookies_callback_t* callback);
  int(__attribute__((__stdcall__))* set_storage_path)(
      struct _cef_cookie_manager_t* self,
      const cef_string_t* path,
      int persist_session_cookies,
      struct _cef_completion_callback_t* callback);






  int(__attribute__((__stdcall__))* flush_store)(struct _cef_cookie_manager_t* self,
                                 struct _cef_completion_callback_t* callback);
} cef_cookie_manager_t;
__attribute__((visibility("default"))) cef_cookie_manager_t* cef_cookie_manager_get_global_manager(
    struct _cef_completion_callback_t* callback);
__attribute__((visibility("default"))) cef_cookie_manager_t* cef_cookie_manager_create_manager(
    const cef_string_t* path,
    int persist_session_cookies,
    struct _cef_completion_callback_t* callback);





typedef struct _cef_cookie_visitor_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* visit)(struct _cef_cookie_visitor_t* self,
                           const struct _cef_cookie_t* cookie,
                           int count,
                           int total,
                           int* deleteCookie);
} cef_cookie_visitor_t;





typedef struct _cef_set_cookie_callback_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* on_complete)(struct _cef_set_cookie_callback_t* self,
                                  int success);
} cef_set_cookie_callback_t;





typedef struct _cef_delete_cookies_callback_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* on_complete)(struct _cef_delete_cookies_callback_t* self,
                                  int num_deleted);
} cef_delete_cookies_callback_t;

struct _cef_extension_handler_t;
struct _cef_request_context_t;





typedef struct _cef_extension_t {



  cef_base_ref_counted_t base;







  cef_string_userfree_t(__attribute__((__stdcall__))* get_identifier)(
      struct _cef_extension_t* self);







  cef_string_userfree_t(__attribute__((__stdcall__))* get_path)(struct _cef_extension_t* self);





  struct _cef_dictionary_value_t*(__attribute__((__stdcall__))* get_manifest)(
      struct _cef_extension_t* self);






  int(__attribute__((__stdcall__))* is_same)(struct _cef_extension_t* self,
                             struct _cef_extension_t* that);






  struct _cef_extension_handler_t*(__attribute__((__stdcall__))* get_handler)(
      struct _cef_extension_t* self);







  struct _cef_request_context_t*(__attribute__((__stdcall__))* get_loader_context)(
      struct _cef_extension_t* self);





  int(__attribute__((__stdcall__))* is_loaded)(struct _cef_extension_t* self);






  void(__attribute__((__stdcall__))* unload)(struct _cef_extension_t* self);
} cef_extension_t;

struct _cef_client_t;





typedef struct _cef_get_extension_resource_callback_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* cont)(struct _cef_get_extension_resource_callback_t* self,
                           struct _cef_stream_reader_t* stream);




  void(__attribute__((__stdcall__))* cancel)(
      struct _cef_get_extension_resource_callback_t* self);
} cef_get_extension_resource_callback_t;






typedef struct _cef_extension_handler_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* on_extension_load_failed)(
      struct _cef_extension_handler_t* self,
      cef_errorcode_t result);





  void(__attribute__((__stdcall__))* on_extension_loaded)(struct _cef_extension_handler_t* self,
                                          struct _cef_extension_t* extension);




  void(__attribute__((__stdcall__))* on_extension_unloaded)(
      struct _cef_extension_handler_t* self,
      struct _cef_extension_t* extension);
  int(__attribute__((__stdcall__))* on_before_background_browser)(
      struct _cef_extension_handler_t* self,
      struct _cef_extension_t* extension,
      const cef_string_t* url,
      struct _cef_client_t** client,
      struct _cef_browser_settings_t* settings);
  int(__attribute__((__stdcall__))* on_before_browser)(
      struct _cef_extension_handler_t* self,
      struct _cef_extension_t* extension,
      struct _cef_browser_t* browser,
      struct _cef_browser_t* active_browser,
      int index,
      const cef_string_t* url,
      int active,
      struct _cef_window_info_t* windowInfo,
      struct _cef_client_t** client,
      struct _cef_browser_settings_t* settings);
  struct _cef_browser_t*(__attribute__((__stdcall__))* get_active_browser)(
      struct _cef_extension_handler_t* self,
      struct _cef_extension_t* extension,
      struct _cef_browser_t* browser,
      int include_incognito);
  int(__attribute__((__stdcall__))* can_access_browser)(struct _cef_extension_handler_t* self,
                                        struct _cef_extension_t* extension,
                                        struct _cef_browser_t* browser,
                                        int include_incognito,
                                        struct _cef_browser_t* target_browser);
  int(__attribute__((__stdcall__))* get_extension_resource)(
      struct _cef_extension_handler_t* self,
      struct _cef_extension_t* extension,
      struct _cef_browser_t* browser,
      const cef_string_t* file,
      struct _cef_get_extension_resource_callback_t* callback);
} cef_extension_handler_t;












struct _cef_browser_t;




typedef struct _cef_web_plugin_info_t {



  cef_base_ref_counted_t base;





  cef_string_userfree_t(__attribute__((__stdcall__))* get_name)(
      struct _cef_web_plugin_info_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_path)(
      struct _cef_web_plugin_info_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_version)(
      struct _cef_web_plugin_info_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_description)(
      struct _cef_web_plugin_info_t* self);
} cef_web_plugin_info_t;





typedef struct _cef_web_plugin_info_visitor_t {



  cef_base_ref_counted_t base;







  int(__attribute__((__stdcall__))* visit)(struct _cef_web_plugin_info_visitor_t* self,
                           struct _cef_web_plugin_info_t* info,
                           int count,
                           int total);
} cef_web_plugin_info_visitor_t;





typedef struct _cef_web_plugin_unstable_callback_t {



  cef_base_ref_counted_t base;






  void(__attribute__((__stdcall__))* is_unstable)(
      struct _cef_web_plugin_unstable_callback_t* self,
      const cef_string_t* path,
      int unstable);
} cef_web_plugin_unstable_callback_t;






typedef struct _cef_register_cdm_callback_t {



  cef_base_ref_counted_t base;







  void(__attribute__((__stdcall__))* on_cdm_registration_complete)(
      struct _cef_register_cdm_callback_t* self,
      cef_cdm_registration_error_t result,
      const cef_string_t* error_message);
} cef_register_cdm_callback_t;





__attribute__((visibility("default"))) void cef_visit_web_plugin_info(
    cef_web_plugin_info_visitor_t* visitor);






__attribute__((visibility("default"))) void cef_refresh_web_plugins();






__attribute__((visibility("default"))) void cef_unregister_internal_web_plugin(const cef_string_t* path);





__attribute__((visibility("default"))) void cef_register_web_plugin_crash(const cef_string_t* path);





__attribute__((visibility("default"))) void cef_is_web_plugin_unstable(
    const cef_string_t* path,
    cef_web_plugin_unstable_callback_t* callback);
__attribute__((visibility("default"))) void cef_register_widevine_cdm(
    const cef_string_t* path,
    cef_register_cdm_callback_t* callback);





struct _cef_request_context_t;






typedef struct _cef_request_context_handler_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* on_request_context_initialized)(
      struct _cef_request_context_handler_t* self,
      struct _cef_request_context_t* request_context);






  struct _cef_cookie_manager_t*(__attribute__((__stdcall__))* get_cookie_manager)(
      struct _cef_request_context_handler_t* self);
  int(__attribute__((__stdcall__))* on_before_plugin_load)(
      struct _cef_request_context_handler_t* self,
      const cef_string_t* mime_type,
      const cef_string_t* plugin_url,
      int is_main_frame,
      const cef_string_t* top_origin_url,
      struct _cef_web_plugin_info_t* plugin_info,
      cef_plugin_policy_t* plugin_policy);
} cef_request_context_handler_t;






struct _cef_scheme_handler_factory_t;




typedef struct _cef_resolve_callback_t {



  cef_base_ref_counted_t base;






  void(__attribute__((__stdcall__))* on_resolve_completed)(struct _cef_resolve_callback_t* self,
                                           cef_errorcode_t result,
                                           cef_string_list_t resolved_ips);
} cef_resolve_callback_t;
typedef struct _cef_request_context_t {



  cef_base_ref_counted_t base;





  int(__attribute__((__stdcall__))* is_same)(struct _cef_request_context_t* self,
                             struct _cef_request_context_t* other);





  int(__attribute__((__stdcall__))* is_sharing_with)(struct _cef_request_context_t* self,
                                     struct _cef_request_context_t* other);






  int(__attribute__((__stdcall__))* is_global)(struct _cef_request_context_t* self);




  struct _cef_request_context_handler_t*(__attribute__((__stdcall__))* get_handler)(
      struct _cef_request_context_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_cache_path)(
      struct _cef_request_context_t* self);
  struct _cef_cookie_manager_t*(__attribute__((__stdcall__))* get_default_cookie_manager)(
      struct _cef_request_context_t* self,
      struct _cef_completion_callback_t* callback);
  int(__attribute__((__stdcall__))* register_scheme_handler_factory)(
      struct _cef_request_context_t* self,
      const cef_string_t* scheme_name,
      const cef_string_t* domain_name,
      struct _cef_scheme_handler_factory_t* factory);





  int(__attribute__((__stdcall__))* clear_scheme_handler_factories)(
      struct _cef_request_context_t* self);
  void(__attribute__((__stdcall__))* purge_plugin_list_cache)(
      struct _cef_request_context_t* self,
      int reload_pages);





  int(__attribute__((__stdcall__))* has_preference)(struct _cef_request_context_t* self,
                                    const cef_string_t* name);
  struct _cef_value_t*(__attribute__((__stdcall__))* get_preference)(
      struct _cef_request_context_t* self,
      const cef_string_t* name);
  struct _cef_dictionary_value_t*(__attribute__((__stdcall__))* get_all_preferences)(
      struct _cef_request_context_t* self,
      int include_defaults);







  int(__attribute__((__stdcall__))* can_set_preference)(struct _cef_request_context_t* self,
                                        const cef_string_t* name);
  int(__attribute__((__stdcall__))* set_preference)(struct _cef_request_context_t* self,
                                    const cef_string_t* name,
                                    struct _cef_value_t* value,
                                    cef_string_t* error);
  void(__attribute__((__stdcall__))* clear_certificate_exceptions)(
      struct _cef_request_context_t* self,
      struct _cef_completion_callback_t* callback);







  void(__attribute__((__stdcall__))* close_all_connections)(
      struct _cef_request_context_t* self,
      struct _cef_completion_callback_t* callback);





  void(__attribute__((__stdcall__))* resolve_host)(struct _cef_request_context_t* self,
                                   const cef_string_t* origin,
                                   struct _cef_resolve_callback_t* callback);







  cef_errorcode_t(__attribute__((__stdcall__))* resolve_host_cached)(
      struct _cef_request_context_t* self,
      const cef_string_t* origin,
      cef_string_list_t resolved_ips);
  void(__attribute__((__stdcall__))* load_extension)(struct _cef_request_context_t* self,
                                     const cef_string_t* root_directory,
                                     struct _cef_dictionary_value_t* manifest,
                                     struct _cef_extension_handler_t* handler);







  int(__attribute__((__stdcall__))* did_load_extension)(struct _cef_request_context_t* self,
                                        const cef_string_t* extension_id);







  int(__attribute__((__stdcall__))* has_extension)(struct _cef_request_context_t* self,
                                   const cef_string_t* extension_id);







  int(__attribute__((__stdcall__))* get_extensions)(struct _cef_request_context_t* self,
                                    cef_string_list_t extension_ids);






  struct _cef_extension_t*(__attribute__((__stdcall__))* get_extension)(
      struct _cef_request_context_t* self,
      const cef_string_t* extension_id);
} cef_request_context_t;




__attribute__((visibility("default"))) cef_request_context_t* cef_request_context_get_global_context();





__attribute__((visibility("default"))) cef_request_context_t* cef_request_context_create_context(
    const struct _cef_request_context_settings_t* settings,
    struct _cef_request_context_handler_t* handler);





__attribute__((visibility("default"))) cef_request_context_t* cef_create_context_shared(
    cef_request_context_t* other,
    struct _cef_request_context_handler_t* handler);





struct _cef_browser_host_t;
struct _cef_client_t;







typedef struct _cef_browser_t {



  cef_base_ref_counted_t base;





  struct _cef_browser_host_t*(__attribute__((__stdcall__))* get_host)(
      struct _cef_browser_t* self);




  int(__attribute__((__stdcall__))* can_go_back)(struct _cef_browser_t* self);




  void(__attribute__((__stdcall__))* go_back)(struct _cef_browser_t* self);




  int(__attribute__((__stdcall__))* can_go_forward)(struct _cef_browser_t* self);




  void(__attribute__((__stdcall__))* go_forward)(struct _cef_browser_t* self);




  int(__attribute__((__stdcall__))* is_loading)(struct _cef_browser_t* self);




  void(__attribute__((__stdcall__))* reload)(struct _cef_browser_t* self);




  void(__attribute__((__stdcall__))* reload_ignore_cache)(struct _cef_browser_t* self);




  void(__attribute__((__stdcall__))* stop_load)(struct _cef_browser_t* self);





  int(__attribute__((__stdcall__))* get_identifier)(struct _cef_browser_t* self);





  int(__attribute__((__stdcall__))* is_same)(struct _cef_browser_t* self,
                             struct _cef_browser_t* that);




  int(__attribute__((__stdcall__))* is_popup)(struct _cef_browser_t* self);




  int(__attribute__((__stdcall__))* has_document)(struct _cef_browser_t* self);




  struct _cef_frame_t*(__attribute__((__stdcall__))* get_main_frame)(
      struct _cef_browser_t* self);




  struct _cef_frame_t*(__attribute__((__stdcall__))* get_focused_frame)(
      struct _cef_browser_t* self);




  struct _cef_frame_t*(__attribute__((__stdcall__))* get_frame_byident)(
      struct _cef_browser_t* self,
      int64 identifier);




  struct _cef_frame_t*(__attribute__((__stdcall__))* get_frame)(struct _cef_browser_t* self,
                                                const cef_string_t* name);




  size_t(__attribute__((__stdcall__))* get_frame_count)(struct _cef_browser_t* self);




  void(__attribute__((__stdcall__))* get_frame_identifiers)(struct _cef_browser_t* self,
                                            size_t* identifiersCount,
                                            int64* identifiers);




  void(__attribute__((__stdcall__))* get_frame_names)(struct _cef_browser_t* self,
                                      cef_string_list_t names);





  int(__attribute__((__stdcall__))* send_process_message)(
      struct _cef_browser_t* self,
      cef_process_id_t target_process,
      struct _cef_process_message_t* message);
} cef_browser_t;





typedef struct _cef_run_file_dialog_callback_t {



  cef_base_ref_counted_t base;
  void(__attribute__((__stdcall__))* on_file_dialog_dismissed)(
      struct _cef_run_file_dialog_callback_t* self,
      int selected_accept_filter,
      cef_string_list_t file_paths);
} cef_run_file_dialog_callback_t;





typedef struct _cef_navigation_entry_visitor_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* visit)(struct _cef_navigation_entry_visitor_t* self,
                           struct _cef_navigation_entry_t* entry,
                           int current,
                           int index,
                           int total);
} cef_navigation_entry_visitor_t;





typedef struct _cef_pdf_print_callback_t {



  cef_base_ref_counted_t base;






  void(__attribute__((__stdcall__))* on_pdf_print_finished)(
      struct _cef_pdf_print_callback_t* self,
      const cef_string_t* path,
      int ok);
} cef_pdf_print_callback_t;





typedef struct _cef_download_image_callback_t {



  cef_base_ref_counted_t base;







  void(__attribute__((__stdcall__))* on_download_image_finished)(
      struct _cef_download_image_callback_t* self,
      const cef_string_t* image_url,
      int http_status_code,
      struct _cef_image_t* image);
} cef_download_image_callback_t;







typedef struct _cef_browser_host_t {



  cef_base_ref_counted_t base;




  struct _cef_browser_t*(__attribute__((__stdcall__))* get_browser)(
      struct _cef_browser_host_t* self);
  void(__attribute__((__stdcall__))* close_browser)(struct _cef_browser_host_t* self,
                                    int force_close);
  int(__attribute__((__stdcall__))* try_close_browser)(struct _cef_browser_host_t* self);




  void(__attribute__((__stdcall__))* set_focus)(struct _cef_browser_host_t* self, int focus);






  HWND(__attribute__((__stdcall__))* get_window_handle)(
      struct _cef_browser_host_t* self);







  HWND(__attribute__((__stdcall__))* get_opener_window_handle)(
      struct _cef_browser_host_t* self);




  int(__attribute__((__stdcall__))* has_view)(struct _cef_browser_host_t* self);




  struct _cef_client_t*(__attribute__((__stdcall__))* get_client)(
      struct _cef_browser_host_t* self);




  struct _cef_request_context_t*(__attribute__((__stdcall__))* get_request_context)(
      struct _cef_browser_host_t* self);





  double(__attribute__((__stdcall__))* get_zoom_level)(struct _cef_browser_host_t* self);






  void(__attribute__((__stdcall__))* set_zoom_level)(struct _cef_browser_host_t* self,
                                     double zoomLevel);
  void(__attribute__((__stdcall__))* run_file_dialog)(
      struct _cef_browser_host_t* self,
      cef_file_dialog_mode_t mode,
      const cef_string_t* title,
      const cef_string_t* default_file_path,
      cef_string_list_t accept_filters,
      int selected_accept_filter,
      struct _cef_run_file_dialog_callback_t* callback);




  void(__attribute__((__stdcall__))* start_download)(struct _cef_browser_host_t* self,
                                     const cef_string_t* url);
  void(__attribute__((__stdcall__))* download_image)(
      struct _cef_browser_host_t* self,
      const cef_string_t* image_url,
      int is_favicon,
      uint32 max_image_size,
      int bypass_cache,
      struct _cef_download_image_callback_t* callback);




  void(__attribute__((__stdcall__))* print)(struct _cef_browser_host_t* self);







  void(__attribute__((__stdcall__))* print_to_pdf)(
      struct _cef_browser_host_t* self,
      const cef_string_t* path,
      const struct _cef_pdf_print_settings_t* settings,
      struct _cef_pdf_print_callback_t* callback);
  void(__attribute__((__stdcall__))* find)(struct _cef_browser_host_t* self,
                           int identifier,
                           const cef_string_t* searchText,
                           int forward,
                           int matchCase,
                           int findNext);




  void(__attribute__((__stdcall__))* stop_finding)(struct _cef_browser_host_t* self,
                                   int clearSelection);
  void(__attribute__((__stdcall__))* show_dev_tools)(
      struct _cef_browser_host_t* self,
      const struct _cef_window_info_t* windowInfo,
      struct _cef_client_t* client,
      const struct _cef_browser_settings_t* settings,
      const cef_point_t* inspect_element_at);




  void(__attribute__((__stdcall__))* close_dev_tools)(struct _cef_browser_host_t* self);





  int(__attribute__((__stdcall__))* has_dev_tools)(struct _cef_browser_host_t* self);







  void(__attribute__((__stdcall__))* get_navigation_entries)(
      struct _cef_browser_host_t* self,
      struct _cef_navigation_entry_visitor_t* visitor,
      int current_only);




  void(__attribute__((__stdcall__))* set_mouse_cursor_change_disabled)(
      struct _cef_browser_host_t* self,
      int disabled);




  int(__attribute__((__stdcall__))* is_mouse_cursor_change_disabled)(
      struct _cef_browser_host_t* self);





  void(__attribute__((__stdcall__))* replace_misspelling)(struct _cef_browser_host_t* self,
                                          const cef_string_t* word);




  void(__attribute__((__stdcall__))* add_word_to_dictionary)(struct _cef_browser_host_t* self,
                                             const cef_string_t* word);




  int(__attribute__((__stdcall__))* is_window_rendering_disabled)(
      struct _cef_browser_host_t* self);







  void(__attribute__((__stdcall__))* was_resized)(struct _cef_browser_host_t* self);






  void(__attribute__((__stdcall__))* was_hidden)(struct _cef_browser_host_t* self, int hidden);
  void(__attribute__((__stdcall__))* notify_screen_info_changed)(
      struct _cef_browser_host_t* self);






  void(__attribute__((__stdcall__))* invalidate)(struct _cef_browser_host_t* self,
                                 cef_paint_element_type_t type);




  void(__attribute__((__stdcall__))* send_key_event)(struct _cef_browser_host_t* self,
                                     const struct _cef_key_event_t* event);





  void(__attribute__((__stdcall__))* send_mouse_click_event)(
      struct _cef_browser_host_t* self,
      const struct _cef_mouse_event_t* event,
      cef_mouse_button_type_t type,
      int mouseUp,
      int clickCount);





  void(__attribute__((__stdcall__))* send_mouse_move_event)(
      struct _cef_browser_host_t* self,
      const struct _cef_mouse_event_t* event,
      int mouseLeave);
  void(__attribute__((__stdcall__))* send_mouse_wheel_event)(
      struct _cef_browser_host_t* self,
      const struct _cef_mouse_event_t* event,
      int deltaX,
      int deltaY);




  void(__attribute__((__stdcall__))* send_focus_event)(struct _cef_browser_host_t* self,
                                       int setFocus);




  void(__attribute__((__stdcall__))* send_capture_lost_event)(struct _cef_browser_host_t* self);





  void(__attribute__((__stdcall__))* notify_move_or_resize_started)(
      struct _cef_browser_host_t* self);
  int(__attribute__((__stdcall__))* get_windowless_frame_rate)(
      struct _cef_browser_host_t* self);
  void(__attribute__((__stdcall__))* set_windowless_frame_rate)(
      struct _cef_browser_host_t* self,
      int frame_rate);
  void(__attribute__((__stdcall__))* ime_set_composition)(
      struct _cef_browser_host_t* self,
      const cef_string_t* text,
      size_t underlinesCount,
      cef_composition_underline_t const* underlines,
      const cef_range_t* replacement_range,
      const cef_range_t* selection_range);
  void(__attribute__((__stdcall__))* ime_commit_text)(struct _cef_browser_host_t* self,
                                      const cef_string_t* text,
                                      const cef_range_t* replacement_range,
                                      int relative_cursor_pos);







  void(__attribute__((__stdcall__))* ime_finish_composing_text)(
      struct _cef_browser_host_t* self,
      int keep_selection);






  void(__attribute__((__stdcall__))* ime_cancel_composition)(struct _cef_browser_host_t* self);
  void(__attribute__((__stdcall__))* drag_target_drag_enter)(
      struct _cef_browser_host_t* self,
      struct _cef_drag_data_t* drag_data,
      const struct _cef_mouse_event_t* event,
      cef_drag_operations_mask_t allowed_ops);







  void(__attribute__((__stdcall__))* drag_target_drag_over)(
      struct _cef_browser_host_t* self,
      const struct _cef_mouse_event_t* event,
      cef_drag_operations_mask_t allowed_ops);






  void(__attribute__((__stdcall__))* drag_target_drag_leave)(struct _cef_browser_host_t* self);
  void(__attribute__((__stdcall__))* drag_target_drop)(struct _cef_browser_host_t* self,
                                       const struct _cef_mouse_event_t* event);
  void(__attribute__((__stdcall__))* drag_source_ended_at)(struct _cef_browser_host_t* self,
                                           int x,
                                           int y,
                                           cef_drag_operations_mask_t op);
  void(__attribute__((__stdcall__))* drag_source_system_drag_ended)(
      struct _cef_browser_host_t* self);





  struct _cef_navigation_entry_t*(__attribute__((__stdcall__))* get_visible_navigation_entry)(
      struct _cef_browser_host_t* self);
  void(__attribute__((__stdcall__))* set_accessibility_state)(struct _cef_browser_host_t* self,
                                              cef_state_t accessibility_state);






  void(__attribute__((__stdcall__))* set_auto_resize_enabled)(struct _cef_browser_host_t* self,
                                              int enabled,
                                              const cef_size_t* min_size,
                                              const cef_size_t* max_size);





  struct _cef_extension_t*(__attribute__((__stdcall__))* get_extension)(
      struct _cef_browser_host_t* self);






  int(__attribute__((__stdcall__))* is_background_host)(struct _cef_browser_host_t* self);
} cef_browser_host_t;
__attribute__((visibility("default"))) int cef_browser_host_create_browser(
    const cef_window_info_t* windowInfo,
    struct _cef_client_t* client,
    const cef_string_t* url,
    const struct _cef_browser_settings_t* settings,
    struct _cef_request_context_t* request_context);






__attribute__((visibility("default"))) cef_browser_t* cef_browser_host_create_browser_sync(
    const cef_window_info_t* windowInfo,
    struct _cef_client_t* client,
    const cef_string_t* url,
    const struct _cef_browser_settings_t* settings,
    struct _cef_request_context_t* request_context);

typedef struct _cef_print_settings_t {



  cef_base_ref_counted_t base;





  int(__attribute__((__stdcall__))* is_valid)(struct _cef_print_settings_t* self);





  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_print_settings_t* self);




  struct _cef_print_settings_t*(__attribute__((__stdcall__))* copy)(
      struct _cef_print_settings_t* self);




  void(__attribute__((__stdcall__))* set_orientation)(struct _cef_print_settings_t* self,
                                      int landscape);




  int(__attribute__((__stdcall__))* is_landscape)(struct _cef_print_settings_t* self);






  void(__attribute__((__stdcall__))* set_printer_printable_area)(
      struct _cef_print_settings_t* self,
      const cef_size_t* physical_size_device_units,
      const cef_rect_t* printable_area_device_units,
      int landscape_needs_flip);




  void(__attribute__((__stdcall__))* set_device_name)(struct _cef_print_settings_t* self,
                                      const cef_string_t* name);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_device_name)(
      struct _cef_print_settings_t* self);




  void(__attribute__((__stdcall__))* set_dpi)(struct _cef_print_settings_t* self, int dpi);




  int(__attribute__((__stdcall__))* get_dpi)(struct _cef_print_settings_t* self);




  void(__attribute__((__stdcall__))* set_page_ranges)(struct _cef_print_settings_t* self,
                                      size_t rangesCount,
                                      cef_range_t const* ranges);




  size_t(__attribute__((__stdcall__))* get_page_ranges_count)(
      struct _cef_print_settings_t* self);




  void(__attribute__((__stdcall__))* get_page_ranges)(struct _cef_print_settings_t* self,
                                      size_t* rangesCount,
                                      cef_range_t* ranges);




  void(__attribute__((__stdcall__))* set_selection_only)(struct _cef_print_settings_t* self,
                                         int selection_only);




  int(__attribute__((__stdcall__))* is_selection_only)(struct _cef_print_settings_t* self);




  void(__attribute__((__stdcall__))* set_collate)(struct _cef_print_settings_t* self,
                                  int collate);




  int(__attribute__((__stdcall__))* will_collate)(struct _cef_print_settings_t* self);




  void(__attribute__((__stdcall__))* set_color_model)(struct _cef_print_settings_t* self,
                                      cef_color_model_t model);




  cef_color_model_t(__attribute__((__stdcall__))* get_color_model)(
      struct _cef_print_settings_t* self);




  void(__attribute__((__stdcall__))* set_copies)(struct _cef_print_settings_t* self,
                                 int copies);




  int(__attribute__((__stdcall__))* get_copies)(struct _cef_print_settings_t* self);




  void(__attribute__((__stdcall__))* set_duplex_mode)(struct _cef_print_settings_t* self,
                                      cef_duplex_mode_t mode);




  cef_duplex_mode_t(__attribute__((__stdcall__))* get_duplex_mode)(
      struct _cef_print_settings_t* self);
} cef_print_settings_t;




__attribute__((visibility("default"))) cef_print_settings_t* cef_print_settings_create();
typedef struct _cef_print_dialog_callback_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* cont)(struct _cef_print_dialog_callback_t* self,
                           struct _cef_print_settings_t* settings);




  void(__attribute__((__stdcall__))* cancel)(struct _cef_print_dialog_callback_t* self);
} cef_print_dialog_callback_t;




typedef struct _cef_print_job_callback_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* cont)(struct _cef_print_job_callback_t* self);
} cef_print_job_callback_t;






typedef struct _cef_print_handler_t {



  cef_base_ref_counted_t base;







  void(__attribute__((__stdcall__))* on_print_start)(struct _cef_print_handler_t* self,
                                     struct _cef_browser_t* browser);






  void(__attribute__((__stdcall__))* on_print_settings)(struct _cef_print_handler_t* self,
                                        struct _cef_browser_t* browser,
                                        struct _cef_print_settings_t* settings,
                                        int get_defaults);






  int(__attribute__((__stdcall__))* on_print_dialog)(
      struct _cef_print_handler_t* self,
      struct _cef_browser_t* browser,
      int has_selection,
      struct _cef_print_dialog_callback_t* callback);






  int(__attribute__((__stdcall__))* on_print_job)(struct _cef_print_handler_t* self,
                                  struct _cef_browser_t* browser,
                                  const cef_string_t* document_name,
                                  const cef_string_t* pdf_file_path,
                                  struct _cef_print_job_callback_t* callback);




  void(__attribute__((__stdcall__))* on_print_reset)(struct _cef_print_handler_t* self,
                                     struct _cef_browser_t* browser);





  cef_size_t(__attribute__((__stdcall__))* get_pdf_paper_size)(
      struct _cef_print_handler_t* self,
      int device_units_per_inch);
} cef_print_handler_t;
typedef struct _cef_browser_process_handler_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* on_context_initialized)(
      struct _cef_browser_process_handler_t* self);
  void(__attribute__((__stdcall__))* on_before_child_process_launch)(
      struct _cef_browser_process_handler_t* self,
      struct _cef_command_line_t* command_line);
  void(__attribute__((__stdcall__))* on_render_process_thread_created)(
      struct _cef_browser_process_handler_t* self,
      struct _cef_list_value_t* extra_info);





  struct _cef_print_handler_t*(__attribute__((__stdcall__))* get_print_handler)(
      struct _cef_browser_process_handler_t* self);
  void(__attribute__((__stdcall__))* on_schedule_message_pump_work)(
      struct _cef_browser_process_handler_t* self,
      int64 delay_ms);
} cef_browser_process_handler_t;








typedef struct _cef_load_handler_t {



  cef_base_ref_counted_t base;
  void(__attribute__((__stdcall__))* on_loading_state_change)(struct _cef_load_handler_t* self,
                                              struct _cef_browser_t* browser,
                                              int isLoading,
                                              int canGoBack,
                                              int canGoForward);
  void(__attribute__((__stdcall__))* on_load_start)(struct _cef_load_handler_t* self,
                                    struct _cef_browser_t* browser,
                                    struct _cef_frame_t* frame,
                                    cef_transition_type_t transition_type);
  void(__attribute__((__stdcall__))* on_load_end)(struct _cef_load_handler_t* self,
                                  struct _cef_browser_t* browser,
                                  struct _cef_frame_t* frame,
                                  int httpStatusCode);
  void(__attribute__((__stdcall__))* on_load_error)(struct _cef_load_handler_t* self,
                                    struct _cef_browser_t* browser,
                                    struct _cef_frame_t* frame,
                                    cef_errorcode_t errorCode,
                                    const cef_string_t* errorText,
                                    const cef_string_t* failedUrl);
} cef_load_handler_t;







typedef struct _cef_task_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* execute)(struct _cef_task_t* self);
} cef_task_t;
typedef struct _cef_task_runner_t {



  cef_base_ref_counted_t base;





  int(__attribute__((__stdcall__))* is_same)(struct _cef_task_runner_t* self,
                             struct _cef_task_runner_t* that);




  int(__attribute__((__stdcall__))* belongs_to_current_thread)(struct _cef_task_runner_t* self);




  int(__attribute__((__stdcall__))* belongs_to_thread)(struct _cef_task_runner_t* self,
                                       cef_thread_id_t threadId);





  int(__attribute__((__stdcall__))* post_task)(struct _cef_task_runner_t* self,
                               struct _cef_task_t* task);







  int(__attribute__((__stdcall__))* post_delayed_task)(struct _cef_task_runner_t* self,
                                       struct _cef_task_t* task,
                                       int64 delay_ms);
} cef_task_runner_t;






__attribute__((visibility("default"))) cef_task_runner_t* cef_task_runner_get_for_current_thread();




__attribute__((visibility("default"))) cef_task_runner_t* cef_task_runner_get_for_thread(
    cef_thread_id_t threadId);





__attribute__((visibility("default"))) int cef_currently_on(cef_thread_id_t threadId);





__attribute__((visibility("default"))) int cef_post_task(cef_thread_id_t threadId, cef_task_t* task);






__attribute__((visibility("default"))) int cef_post_delayed_task(cef_thread_id_t threadId,
                                     cef_task_t* task,
                                     int64 delay_ms);





struct _cef_v8exception_t;
struct _cef_v8handler_t;
struct _cef_v8stack_frame_t;
struct _cef_v8value_t;
typedef struct _cef_v8context_t {



  cef_base_ref_counted_t base;






  struct _cef_task_runner_t*(__attribute__((__stdcall__))* get_task_runner)(
      struct _cef_v8context_t* self);






  int(__attribute__((__stdcall__))* is_valid)(struct _cef_v8context_t* self);





  struct _cef_browser_t*(__attribute__((__stdcall__))* get_browser)(
      struct _cef_v8context_t* self);





  struct _cef_frame_t*(__attribute__((__stdcall__))* get_frame)(struct _cef_v8context_t* self);





  struct _cef_v8value_t*(__attribute__((__stdcall__))* get_global)(
      struct _cef_v8context_t* self);
  int(__attribute__((__stdcall__))* enter)(struct _cef_v8context_t* self);





  int(__attribute__((__stdcall__))* exit)(struct _cef_v8context_t* self);





  int(__attribute__((__stdcall__))* is_same)(struct _cef_v8context_t* self,
                             struct _cef_v8context_t* that);
  int(__attribute__((__stdcall__))* eval)(struct _cef_v8context_t* self,
                          const cef_string_t* code,
                          const cef_string_t* script_url,
                          int start_line,
                          struct _cef_v8value_t** retval,
                          struct _cef_v8exception_t** exception);
} cef_v8context_t;




__attribute__((visibility("default"))) cef_v8context_t* cef_v8context_get_current_context();




__attribute__((visibility("default"))) cef_v8context_t* cef_v8context_get_entered_context();




__attribute__((visibility("default"))) int cef_v8context_in_context();






typedef struct _cef_v8handler_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* execute)(struct _cef_v8handler_t* self,
                             const cef_string_t* name,
                             struct _cef_v8value_t* object,
                             size_t argumentsCount,
                             struct _cef_v8value_t* const* arguments,
                             struct _cef_v8value_t** retval,
                             cef_string_t* exception);
} cef_v8handler_t;







typedef struct _cef_v8accessor_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* get)(struct _cef_v8accessor_t* self,
                         const cef_string_t* name,
                         struct _cef_v8value_t* object,
                         struct _cef_v8value_t** retval,
                         cef_string_t* exception);
  int(__attribute__((__stdcall__))* set)(struct _cef_v8accessor_t* self,
                         const cef_string_t* name,
                         struct _cef_v8value_t* object,
                         struct _cef_v8value_t* value,
                         cef_string_t* exception);
} cef_v8accessor_t;
typedef struct _cef_v8interceptor_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* get_byname)(struct _cef_v8interceptor_t* self,
                                const cef_string_t* name,
                                struct _cef_v8value_t* object,
                                struct _cef_v8value_t** retval,
                                cef_string_t* exception);
  int(__attribute__((__stdcall__))* get_byindex)(struct _cef_v8interceptor_t* self,
                                 int index,
                                 struct _cef_v8value_t* object,
                                 struct _cef_v8value_t** retval,
                                 cef_string_t* exception);
  int(__attribute__((__stdcall__))* set_byname)(struct _cef_v8interceptor_t* self,
                                const cef_string_t* name,
                                struct _cef_v8value_t* object,
                                struct _cef_v8value_t* value,
                                cef_string_t* exception);
  int(__attribute__((__stdcall__))* set_byindex)(struct _cef_v8interceptor_t* self,
                                 int index,
                                 struct _cef_v8value_t* object,
                                 struct _cef_v8value_t* value,
                                 cef_string_t* exception);
} cef_v8interceptor_t;





typedef struct _cef_v8exception_t {



  cef_base_ref_counted_t base;





  cef_string_userfree_t(__attribute__((__stdcall__))* get_message)(
      struct _cef_v8exception_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_source_line)(
      struct _cef_v8exception_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_script_resource_name)(
      struct _cef_v8exception_t* self);





  int(__attribute__((__stdcall__))* get_line_number)(struct _cef_v8exception_t* self);





  int(__attribute__((__stdcall__))* get_start_position)(struct _cef_v8exception_t* self);





  int(__attribute__((__stdcall__))* get_end_position)(struct _cef_v8exception_t* self);





  int(__attribute__((__stdcall__))* get_start_column)(struct _cef_v8exception_t* self);





  int(__attribute__((__stdcall__))* get_end_column)(struct _cef_v8exception_t* self);
} cef_v8exception_t;
typedef struct _cef_v8value_t {



  cef_base_ref_counted_t base;






  int(__attribute__((__stdcall__))* is_valid)(struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* is_undefined)(struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* is_null)(struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* is_bool)(struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* is_int)(struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* is_uint)(struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* is_double)(struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* is_date)(struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* is_string)(struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* is_object)(struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* is_array)(struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* is_function)(struct _cef_v8value_t* self);





  int(__attribute__((__stdcall__))* is_same)(struct _cef_v8value_t* self,
                             struct _cef_v8value_t* that);




  int(__attribute__((__stdcall__))* get_bool_value)(struct _cef_v8value_t* self);




  int32(__attribute__((__stdcall__))* get_int_value)(struct _cef_v8value_t* self);




  uint32(__attribute__((__stdcall__))* get_uint_value)(struct _cef_v8value_t* self);




  double(__attribute__((__stdcall__))* get_double_value)(struct _cef_v8value_t* self);




  cef_time_t(__attribute__((__stdcall__))* get_date_value)(struct _cef_v8value_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_string_value)(
      struct _cef_v8value_t* self);
  int(__attribute__((__stdcall__))* is_user_created)(struct _cef_v8value_t* self);





  int(__attribute__((__stdcall__))* has_exception)(struct _cef_v8value_t* self);





  struct _cef_v8exception_t*(__attribute__((__stdcall__))* get_exception)(
      struct _cef_v8value_t* self);




  int(__attribute__((__stdcall__))* clear_exception)(struct _cef_v8value_t* self);





  int(__attribute__((__stdcall__))* will_rethrow_exceptions)(struct _cef_v8value_t* self);
  int(__attribute__((__stdcall__))* set_rethrow_exceptions)(struct _cef_v8value_t* self,
                                            int rethrow);




  int(__attribute__((__stdcall__))* has_value_bykey)(struct _cef_v8value_t* self,
                                     const cef_string_t* key);




  int(__attribute__((__stdcall__))* has_value_byindex)(struct _cef_v8value_t* self, int index);







  int(__attribute__((__stdcall__))* delete_value_bykey)(struct _cef_v8value_t* self,
                                        const cef_string_t* key);







  int(__attribute__((__stdcall__))* delete_value_byindex)(struct _cef_v8value_t* self,
                                          int index);





  struct _cef_v8value_t*(__attribute__((__stdcall__))* get_value_bykey)(
      struct _cef_v8value_t* self,
      const cef_string_t* key);





  struct _cef_v8value_t*(
      __attribute__((__stdcall__))* get_value_byindex)(struct _cef_v8value_t* self, int index);







  int(__attribute__((__stdcall__))* set_value_bykey)(struct _cef_v8value_t* self,
                                     const cef_string_t* key,
                                     struct _cef_v8value_t* value,
                                     cef_v8_propertyattribute_t attribute);







  int(__attribute__((__stdcall__))* set_value_byindex)(struct _cef_v8value_t* self,
                                       int index,
                                       struct _cef_v8value_t* value);
  int(__attribute__((__stdcall__))* set_value_byaccessor)(struct _cef_v8value_t* self,
                                          const cef_string_t* key,
                                          cef_v8_accesscontrol_t settings,
                                          cef_v8_propertyattribute_t attribute);





  int(__attribute__((__stdcall__))* get_keys)(struct _cef_v8value_t* self,
                              cef_string_list_t keys);






  int(__attribute__((__stdcall__))* set_user_data)(struct _cef_v8value_t* self,
                                   struct _cef_base_ref_counted_t* user_data);




  struct _cef_base_ref_counted_t*(__attribute__((__stdcall__))* get_user_data)(
      struct _cef_v8value_t* self);





  int(__attribute__((__stdcall__))* get_externally_allocated_memory)(
      struct _cef_v8value_t* self);
  int(__attribute__((__stdcall__))* adjust_externally_allocated_memory)(
      struct _cef_v8value_t* self,
      int change_in_bytes);






  int(__attribute__((__stdcall__))* get_array_length)(struct _cef_v8value_t* self);







  cef_string_userfree_t(__attribute__((__stdcall__))* get_function_name)(
      struct _cef_v8value_t* self);




  struct _cef_v8handler_t*(__attribute__((__stdcall__))* get_function_handler)(
      struct _cef_v8value_t* self);
  struct _cef_v8value_t*(__attribute__((__stdcall__))* execute_function)(
      struct _cef_v8value_t* self,
      struct _cef_v8value_t* object,
      size_t argumentsCount,
      struct _cef_v8value_t* const* arguments);
  struct _cef_v8value_t*(__attribute__((__stdcall__))* execute_function_with_context)(
      struct _cef_v8value_t* self,
      struct _cef_v8context_t* context,
      struct _cef_v8value_t* object,
      size_t argumentsCount,
      struct _cef_v8value_t* const* arguments);
} cef_v8value_t;




__attribute__((visibility("default"))) cef_v8value_t* cef_v8value_create_undefined();




__attribute__((visibility("default"))) cef_v8value_t* cef_v8value_create_null();




__attribute__((visibility("default"))) cef_v8value_t* cef_v8value_create_bool(int value);




__attribute__((visibility("default"))) cef_v8value_t* cef_v8value_create_int(int32 value);




__attribute__((visibility("default"))) cef_v8value_t* cef_v8value_create_uint(uint32 value);




__attribute__((visibility("default"))) cef_v8value_t* cef_v8value_create_double(double value);







__attribute__((visibility("default"))) cef_v8value_t* cef_v8value_create_date(const cef_time_t* date);




__attribute__((visibility("default"))) cef_v8value_t* cef_v8value_create_string(const cef_string_t* value);
__attribute__((visibility("default"))) cef_v8value_t* cef_v8value_create_object(
    cef_v8accessor_t* accessor,
    cef_v8interceptor_t* interceptor);
__attribute__((visibility("default"))) cef_v8value_t* cef_v8value_create_array(int length);







__attribute__((visibility("default"))) cef_v8value_t* cef_v8value_create_function(const cef_string_t* name,
                                                      cef_v8handler_t* handler);
typedef struct _cef_v8stack_trace_t {



  cef_base_ref_counted_t base;






  int(__attribute__((__stdcall__))* is_valid)(struct _cef_v8stack_trace_t* self);




  int(__attribute__((__stdcall__))* get_frame_count)(struct _cef_v8stack_trace_t* self);




  struct _cef_v8stack_frame_t*(
      __attribute__((__stdcall__))* get_frame)(struct _cef_v8stack_trace_t* self, int index);
} cef_v8stack_trace_t;





__attribute__((visibility("default"))) cef_v8stack_trace_t* cef_v8stack_trace_get_current(int frame_limit);
typedef struct _cef_v8stack_frame_t {



  cef_base_ref_counted_t base;






  int(__attribute__((__stdcall__))* is_valid)(struct _cef_v8stack_frame_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_script_name)(
      struct _cef_v8stack_frame_t* self);







  cef_string_userfree_t(__attribute__((__stdcall__))* get_script_name_or_source_url)(
      struct _cef_v8stack_frame_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_function_name)(
      struct _cef_v8stack_frame_t* self);




  int(__attribute__((__stdcall__))* get_line_number)(struct _cef_v8stack_frame_t* self);





  int(__attribute__((__stdcall__))* get_column)(struct _cef_v8stack_frame_t* self);




  int(__attribute__((__stdcall__))* is_eval)(struct _cef_v8stack_frame_t* self);




  int(__attribute__((__stdcall__))* is_constructor)(struct _cef_v8stack_frame_t* self);
} cef_v8stack_frame_t;
__attribute__((visibility("default"))) int cef_register_extension(const cef_string_t* extension_name,
                                      const cef_string_t* javascript_code,
                                      cef_v8handler_t* handler);
typedef struct _cef_render_process_handler_t {



  cef_base_ref_counted_t base;







  void(__attribute__((__stdcall__))* on_render_thread_created)(
      struct _cef_render_process_handler_t* self,
      struct _cef_list_value_t* extra_info);




  void(__attribute__((__stdcall__))* on_web_kit_initialized)(
      struct _cef_render_process_handler_t* self);






  void(__attribute__((__stdcall__))* on_browser_created)(
      struct _cef_render_process_handler_t* self,
      struct _cef_browser_t* browser);




  void(__attribute__((__stdcall__))* on_browser_destroyed)(
      struct _cef_render_process_handler_t* self,
      struct _cef_browser_t* browser);




  struct _cef_load_handler_t*(__attribute__((__stdcall__))* get_load_handler)(
      struct _cef_render_process_handler_t* self);






  int(__attribute__((__stdcall__))* on_before_navigation)(
      struct _cef_render_process_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request,
      cef_navigation_type_t navigation_type,
      int is_redirect);
  void(__attribute__((__stdcall__))* on_context_created)(
      struct _cef_render_process_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_v8context_t* context);





  void(__attribute__((__stdcall__))* on_context_released)(
      struct _cef_render_process_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_v8context_t* context);






  void(__attribute__((__stdcall__))* on_uncaught_exception)(
      struct _cef_render_process_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_v8context_t* context,
      struct _cef_v8exception_t* exception,
      struct _cef_v8stack_trace_t* stackTrace);
  void(__attribute__((__stdcall__))* on_focused_node_changed)(
      struct _cef_render_process_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_domnode_t* node);






  int(__attribute__((__stdcall__))* on_process_message_received)(
      struct _cef_render_process_handler_t* self,
      struct _cef_browser_t* browser,
      cef_process_id_t source_process,
      struct _cef_process_message_t* message);
} cef_render_process_handler_t;

typedef struct _cef_resource_bundle_handler_t {



  cef_base_ref_counted_t base;







  int(__attribute__((__stdcall__))* get_localized_string)(
      struct _cef_resource_bundle_handler_t* self,
      int string_id,
      cef_string_t* string);
  int(__attribute__((__stdcall__))* get_data_resource)(
      struct _cef_resource_bundle_handler_t* self,
      int resource_id,
      void** data,
      size_t* data_size);
  int(__attribute__((__stdcall__))* get_data_resource_for_scale)(
      struct _cef_resource_bundle_handler_t* self,
      int resource_id,
      cef_scale_factor_t scale_factor,
      void** data,
      size_t* data_size);
} cef_resource_bundle_handler_t;














typedef struct _cef_response_t {



  cef_base_ref_counted_t base;




  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_response_t* self);




  cef_errorcode_t(__attribute__((__stdcall__))* get_error)(struct _cef_response_t* self);





  void(__attribute__((__stdcall__))* set_error)(struct _cef_response_t* self,
                                cef_errorcode_t error);




  int(__attribute__((__stdcall__))* get_status)(struct _cef_response_t* self);




  void(__attribute__((__stdcall__))* set_status)(struct _cef_response_t* self, int status);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_status_text)(
      struct _cef_response_t* self);




  void(__attribute__((__stdcall__))* set_status_text)(struct _cef_response_t* self,
                                      const cef_string_t* statusText);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_mime_type)(
      struct _cef_response_t* self);




  void(__attribute__((__stdcall__))* set_mime_type)(struct _cef_response_t* self,
                                    const cef_string_t* mimeType);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_header)(struct _cef_response_t* self,
                                                  const cef_string_t* name);




  void(__attribute__((__stdcall__))* get_header_map)(struct _cef_response_t* self,
                                     cef_string_multimap_t headerMap);




  void(__attribute__((__stdcall__))* set_header_map)(struct _cef_response_t* self,
                                     cef_string_multimap_t headerMap);
} cef_response_t;




__attribute__((visibility("default"))) cef_response_t* cef_response_create();
typedef struct _cef_resource_handler_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* process_request)(struct _cef_resource_handler_t* self,
                                     struct _cef_request_t* request,
                                     struct _cef_callback_t* callback);
  void(__attribute__((__stdcall__))* get_response_headers)(struct _cef_resource_handler_t* self,
                                           struct _cef_response_t* response,
                                           int64* response_length,
                                           cef_string_t* redirectUrl);
  int(__attribute__((__stdcall__))* read_response)(struct _cef_resource_handler_t* self,
                                   void* data_out,
                                   int bytes_to_read,
                                   int* bytes_read,
                                   struct _cef_callback_t* callback);






  int(__attribute__((__stdcall__))* can_get_cookie)(struct _cef_resource_handler_t* self,
                                    const struct _cef_cookie_t* cookie);





  int(__attribute__((__stdcall__))* can_set_cookie)(struct _cef_resource_handler_t* self,
                                    const struct _cef_cookie_t* cookie);




  void(__attribute__((__stdcall__))* cancel)(struct _cef_resource_handler_t* self);
} cef_resource_handler_t;






struct _cef_scheme_handler_factory_t;




typedef struct _cef_scheme_registrar_t {



  cef_base_scoped_t base;
  int(__attribute__((__stdcall__))* add_custom_scheme)(struct _cef_scheme_registrar_t* self,
                                       const cef_string_t* scheme_name,
                                       int is_standard,
                                       int is_local,
                                       int is_display_isolated,
                                       int is_secure,
                                       int is_cors_enabled,
                                       int is_csp_bypassing);
} cef_scheme_registrar_t;






typedef struct _cef_scheme_handler_factory_t {



  cef_base_ref_counted_t base;
  struct _cef_resource_handler_t*(__attribute__((__stdcall__))* create)(
      struct _cef_scheme_handler_factory_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      const cef_string_t* scheme_name,
      struct _cef_request_t* request);
} cef_scheme_handler_factory_t;
__attribute__((visibility("default"))) int cef_register_scheme_handler_factory(
    const cef_string_t* scheme_name,
    const cef_string_t* domain_name,
    cef_scheme_handler_factory_t* factory);
__attribute__((visibility("default"))) int cef_clear_scheme_handler_factories();





struct _cef_app_t;





typedef struct _cef_app_t {



  cef_base_ref_counted_t base;
  void(__attribute__((__stdcall__))* on_before_command_line_processing)(
      struct _cef_app_t* self,
      const cef_string_t* process_type,
      struct _cef_command_line_t* command_line);







  void(__attribute__((__stdcall__))* on_register_custom_schemes)(
      struct _cef_app_t* self,
      struct _cef_scheme_registrar_t* registrar);







  struct _cef_resource_bundle_handler_t*(
      __attribute__((__stdcall__))* get_resource_bundle_handler)(struct _cef_app_t* self);





  struct _cef_browser_process_handler_t*(
      __attribute__((__stdcall__))* get_browser_process_handler)(struct _cef_app_t* self);





  struct _cef_render_process_handler_t*(
      __attribute__((__stdcall__))* get_render_process_handler)(struct _cef_app_t* self);
} cef_app_t;
__attribute__((visibility("default"))) int cef_execute_process(const struct _cef_main_args_t* args,
                                   cef_app_t* application,
                                   void* windows_sandbox_info);
__attribute__((visibility("default"))) int cef_initialize(const struct _cef_main_args_t* args,
                              const struct _cef_settings_t* settings,
                              cef_app_t* application,
                              void* windows_sandbox_info);





__attribute__((visibility("default"))) void cef_shutdown();
__attribute__((visibility("default"))) void cef_do_message_loop_work();
__attribute__((visibility("default"))) void cef_run_message_loop();






__attribute__((visibility("default"))) void cef_quit_message_loop();





__attribute__((visibility("default"))) void cef_set_osmodal_loop(int osModalLoop);






__attribute__((visibility("default"))) void cef_enable_highdpi_support();

typedef struct _cef_auth_callback_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* cont)(struct _cef_auth_callback_t* self,
                           const cef_string_t* username,
                           const cef_string_t* password);




  void(__attribute__((__stdcall__))* cancel)(struct _cef_auth_callback_t* self);
} cef_auth_callback_t;






















struct _cef_menu_model_t;






typedef struct _cef_menu_model_delegate_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* execute_command)(struct _cef_menu_model_delegate_t* self,
                                      struct _cef_menu_model_t* menu_model,
                                      int command_id,
                                      cef_event_flags_t event_flags);





  void(__attribute__((__stdcall__))* mouse_outside_menu)(
      struct _cef_menu_model_delegate_t* self,
      struct _cef_menu_model_t* menu_model,
      const cef_point_t* screen_point);





  void(__attribute__((__stdcall__))* unhandled_open_submenu)(
      struct _cef_menu_model_delegate_t* self,
      struct _cef_menu_model_t* menu_model,
      int is_rtl);





  void(__attribute__((__stdcall__))* unhandled_close_submenu)(
      struct _cef_menu_model_delegate_t* self,
      struct _cef_menu_model_t* menu_model,
      int is_rtl);




  void(__attribute__((__stdcall__))* menu_will_show)(struct _cef_menu_model_delegate_t* self,
                                     struct _cef_menu_model_t* menu_model);




  void(__attribute__((__stdcall__))* menu_closed)(struct _cef_menu_model_delegate_t* self,
                                  struct _cef_menu_model_t* menu_model);





  int(__attribute__((__stdcall__))* format_label)(struct _cef_menu_model_delegate_t* self,
                                  struct _cef_menu_model_t* menu_model,
                                  cef_string_t* label);
} cef_menu_model_delegate_t;
typedef struct _cef_menu_model_t {



  cef_base_ref_counted_t base;




  int(__attribute__((__stdcall__))* is_sub_menu)(struct _cef_menu_model_t* self);




  int(__attribute__((__stdcall__))* clear)(struct _cef_menu_model_t* self);




  int(__attribute__((__stdcall__))* get_count)(struct _cef_menu_model_t* self);




  int(__attribute__((__stdcall__))* add_separator)(struct _cef_menu_model_t* self);




  int(__attribute__((__stdcall__))* add_item)(struct _cef_menu_model_t* self,
                              int command_id,
                              const cef_string_t* label);




  int(__attribute__((__stdcall__))* add_check_item)(struct _cef_menu_model_t* self,
                                    int command_id,
                                    const cef_string_t* label);





  int(__attribute__((__stdcall__))* add_radio_item)(struct _cef_menu_model_t* self,
                                    int command_id,
                                    const cef_string_t* label,
                                    int group_id);




  struct _cef_menu_model_t*(__attribute__((__stdcall__))* add_sub_menu)(
      struct _cef_menu_model_t* self,
      int command_id,
      const cef_string_t* label);





  int(__attribute__((__stdcall__))* insert_separator_at)(struct _cef_menu_model_t* self,
                                         int index);





  int(__attribute__((__stdcall__))* insert_item_at)(struct _cef_menu_model_t* self,
                                    int index,
                                    int command_id,
                                    const cef_string_t* label);





  int(__attribute__((__stdcall__))* insert_check_item_at)(struct _cef_menu_model_t* self,
                                          int index,
                                          int command_id,
                                          const cef_string_t* label);






  int(__attribute__((__stdcall__))* insert_radio_item_at)(struct _cef_menu_model_t* self,
                                          int index,
                                          int command_id,
                                          const cef_string_t* label,
                                          int group_id);





  struct _cef_menu_model_t*(__attribute__((__stdcall__))* insert_sub_menu_at)(
      struct _cef_menu_model_t* self,
      int index,
      int command_id,
      const cef_string_t* label);





  int(__attribute__((__stdcall__))* remove)(struct _cef_menu_model_t* self, int command_id);




  int(__attribute__((__stdcall__))* remove_at)(struct _cef_menu_model_t* self, int index);





  int(__attribute__((__stdcall__))* get_index_of)(struct _cef_menu_model_t* self,
                                  int command_id);





  int(__attribute__((__stdcall__))* get_command_id_at)(struct _cef_menu_model_t* self,
                                       int index);




  int(__attribute__((__stdcall__))* set_command_id_at)(struct _cef_menu_model_t* self,
                                       int index,
                                       int command_id);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_label)(struct _cef_menu_model_t* self,
                                                 int command_id);






  cef_string_userfree_t(
      __attribute__((__stdcall__))* get_label_at)(struct _cef_menu_model_t* self, int index);




  int(__attribute__((__stdcall__))* set_label)(struct _cef_menu_model_t* self,
                               int command_id,
                               const cef_string_t* label);




  int(__attribute__((__stdcall__))* set_label_at)(struct _cef_menu_model_t* self,
                                  int index,
                                  const cef_string_t* label);




  cef_menu_item_type_t(__attribute__((__stdcall__))* get_type)(struct _cef_menu_model_t* self,
                                               int command_id);




  cef_menu_item_type_t(
      __attribute__((__stdcall__))* get_type_at)(struct _cef_menu_model_t* self, int index);




  int(__attribute__((__stdcall__))* get_group_id)(struct _cef_menu_model_t* self,
                                  int command_id);




  int(__attribute__((__stdcall__))* get_group_id_at)(struct _cef_menu_model_t* self, int index);





  int(__attribute__((__stdcall__))* set_group_id)(struct _cef_menu_model_t* self,
                                  int command_id,
                                  int group_id);




  int(__attribute__((__stdcall__))* set_group_id_at)(struct _cef_menu_model_t* self,
                                     int index,
                                     int group_id);




  struct _cef_menu_model_t*(__attribute__((__stdcall__))* get_sub_menu)(
      struct _cef_menu_model_t* self,
      int command_id);




  struct _cef_menu_model_t*(
      __attribute__((__stdcall__))* get_sub_menu_at)(struct _cef_menu_model_t* self, int index);




  int(__attribute__((__stdcall__))* is_visible)(struct _cef_menu_model_t* self, int command_id);




  int(__attribute__((__stdcall__))* is_visible_at)(struct _cef_menu_model_t* self, int index);





  int(__attribute__((__stdcall__))* set_visible)(struct _cef_menu_model_t* self,
                                 int command_id,
                                 int visible);





  int(__attribute__((__stdcall__))* set_visible_at)(struct _cef_menu_model_t* self,
                                    int index,
                                    int visible);




  int(__attribute__((__stdcall__))* is_enabled)(struct _cef_menu_model_t* self, int command_id);




  int(__attribute__((__stdcall__))* is_enabled_at)(struct _cef_menu_model_t* self, int index);





  int(__attribute__((__stdcall__))* set_enabled)(struct _cef_menu_model_t* self,
                                 int command_id,
                                 int enabled);





  int(__attribute__((__stdcall__))* set_enabled_at)(struct _cef_menu_model_t* self,
                                    int index,
                                    int enabled);





  int(__attribute__((__stdcall__))* is_checked)(struct _cef_menu_model_t* self, int command_id);





  int(__attribute__((__stdcall__))* is_checked_at)(struct _cef_menu_model_t* self, int index);





  int(__attribute__((__stdcall__))* set_checked)(struct _cef_menu_model_t* self,
                                 int command_id,
                                 int checked);





  int(__attribute__((__stdcall__))* set_checked_at)(struct _cef_menu_model_t* self,
                                    int index,
                                    int checked);





  int(__attribute__((__stdcall__))* has_accelerator)(struct _cef_menu_model_t* self,
                                     int command_id);





  int(__attribute__((__stdcall__))* has_accelerator_at)(struct _cef_menu_model_t* self,
                                        int index);





  int(__attribute__((__stdcall__))* set_accelerator)(struct _cef_menu_model_t* self,
                                     int command_id,
                                     int key_code,
                                     int shift_pressed,
                                     int ctrl_pressed,
                                     int alt_pressed);





  int(__attribute__((__stdcall__))* set_accelerator_at)(struct _cef_menu_model_t* self,
                                        int index,
                                        int key_code,
                                        int shift_pressed,
                                        int ctrl_pressed,
                                        int alt_pressed);





  int(__attribute__((__stdcall__))* remove_accelerator)(struct _cef_menu_model_t* self,
                                        int command_id);





  int(__attribute__((__stdcall__))* remove_accelerator_at)(struct _cef_menu_model_t* self,
                                           int index);





  int(__attribute__((__stdcall__))* get_accelerator)(struct _cef_menu_model_t* self,
                                     int command_id,
                                     int* key_code,
                                     int* shift_pressed,
                                     int* ctrl_pressed,
                                     int* alt_pressed);





  int(__attribute__((__stdcall__))* get_accelerator_at)(struct _cef_menu_model_t* self,
                                        int index,
                                        int* key_code,
                                        int* shift_pressed,
                                        int* ctrl_pressed,
                                        int* alt_pressed);







  int(__attribute__((__stdcall__))* set_color)(struct _cef_menu_model_t* self,
                               int command_id,
                               cef_menu_color_type_t color_type,
                               cef_color_t color);
  int(__attribute__((__stdcall__))* set_color_at)(struct _cef_menu_model_t* self,
                                  int index,
                                  cef_menu_color_type_t color_type,
                                  cef_color_t color);






  int(__attribute__((__stdcall__))* get_color)(struct _cef_menu_model_t* self,
                               int command_id,
                               cef_menu_color_type_t color_type,
                               cef_color_t* color);







  int(__attribute__((__stdcall__))* get_color_at)(struct _cef_menu_model_t* self,
                                  int index,
                                  cef_menu_color_type_t color_type,
                                  cef_color_t* color);
  int(__attribute__((__stdcall__))* set_font_list)(struct _cef_menu_model_t* self,
                                   int command_id,
                                   const cef_string_t* font_list);
  int(__attribute__((__stdcall__))* set_font_list_at)(struct _cef_menu_model_t* self,
                                      int index,
                                      const cef_string_t* font_list);
} cef_menu_model_t;




__attribute__((visibility("default"))) cef_menu_model_t* cef_menu_model_create(
    struct _cef_menu_model_delegate_t* delegate);





struct _cef_context_menu_params_t;




typedef struct _cef_run_context_menu_callback_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* cont)(struct _cef_run_context_menu_callback_t* self,
                           int command_id,
                           cef_event_flags_t event_flags);




  void(__attribute__((__stdcall__))* cancel)(struct _cef_run_context_menu_callback_t* self);
} cef_run_context_menu_callback_t;





typedef struct _cef_context_menu_handler_t {



  cef_base_ref_counted_t base;
  void(__attribute__((__stdcall__))* on_before_context_menu)(
      struct _cef_context_menu_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_context_menu_params_t* params,
      struct _cef_menu_model_t* model);
  int(__attribute__((__stdcall__))* run_context_menu)(
      struct _cef_context_menu_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_context_menu_params_t* params,
      struct _cef_menu_model_t* model,
      struct _cef_run_context_menu_callback_t* callback);
  int(__attribute__((__stdcall__))* on_context_menu_command)(
      struct _cef_context_menu_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_context_menu_params_t* params,
      int command_id,
      cef_event_flags_t event_flags);





  void(__attribute__((__stdcall__))* on_context_menu_dismissed)(
      struct _cef_context_menu_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame);
} cef_context_menu_handler_t;





typedef struct _cef_context_menu_params_t {



  cef_base_ref_counted_t base;





  int(__attribute__((__stdcall__))* get_xcoord)(struct _cef_context_menu_params_t* self);





  int(__attribute__((__stdcall__))* get_ycoord)(struct _cef_context_menu_params_t* self);





  cef_context_menu_type_flags_t(__attribute__((__stdcall__))* get_type_flags)(
      struct _cef_context_menu_params_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_link_url)(
      struct _cef_context_menu_params_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_unfiltered_link_url)(
      struct _cef_context_menu_params_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_source_url)(
      struct _cef_context_menu_params_t* self);





  int(__attribute__((__stdcall__))* has_image_contents)(
      struct _cef_context_menu_params_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_title_text)(
      struct _cef_context_menu_params_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_page_url)(
      struct _cef_context_menu_params_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_frame_url)(
      struct _cef_context_menu_params_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_frame_charset)(
      struct _cef_context_menu_params_t* self);




  cef_context_menu_media_type_t(__attribute__((__stdcall__))* get_media_type)(
      struct _cef_context_menu_params_t* self);





  cef_context_menu_media_state_flags_t(__attribute__((__stdcall__))* get_media_state_flags)(
      struct _cef_context_menu_params_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_selection_text)(
      struct _cef_context_menu_params_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_misspelled_word)(
      struct _cef_context_menu_params_t* self);






  int(__attribute__((__stdcall__))* get_dictionary_suggestions)(
      struct _cef_context_menu_params_t* self,
      cef_string_list_t suggestions);




  int(__attribute__((__stdcall__))* is_editable)(struct _cef_context_menu_params_t* self);





  int(__attribute__((__stdcall__))* is_spell_check_enabled)(
      struct _cef_context_menu_params_t* self);





  cef_context_menu_edit_state_flags_t(__attribute__((__stdcall__))* get_edit_state_flags)(
      struct _cef_context_menu_params_t* self);






  int(__attribute__((__stdcall__))* is_custom_menu)(struct _cef_context_menu_params_t* self);




  int(__attribute__((__stdcall__))* is_pepper_menu)(struct _cef_context_menu_params_t* self);
} cef_context_menu_params_t;

typedef struct _cef_file_dialog_callback_t {



  cef_base_ref_counted_t base;
  void(__attribute__((__stdcall__))* cont)(struct _cef_file_dialog_callback_t* self,
                           int selected_accept_filter,
                           cef_string_list_t file_paths);




  void(__attribute__((__stdcall__))* cancel)(struct _cef_file_dialog_callback_t* self);
} cef_file_dialog_callback_t;





typedef struct _cef_dialog_handler_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* on_file_dialog)(
      struct _cef_dialog_handler_t* self,
      struct _cef_browser_t* browser,
      cef_file_dialog_mode_t mode,
      const cef_string_t* title,
      const cef_string_t* default_file_path,
      cef_string_list_t accept_filters,
      int selected_accept_filter,
      struct _cef_file_dialog_callback_t* callback);
} cef_dialog_handler_t;

typedef struct _cef_display_handler_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* on_address_change)(struct _cef_display_handler_t* self,
                                        struct _cef_browser_t* browser,
                                        struct _cef_frame_t* frame,
                                        const cef_string_t* url);




  void(__attribute__((__stdcall__))* on_title_change)(struct _cef_display_handler_t* self,
                                      struct _cef_browser_t* browser,
                                      const cef_string_t* title);




  void(__attribute__((__stdcall__))* on_favicon_urlchange)(struct _cef_display_handler_t* self,
                                           struct _cef_browser_t* browser,
                                           cef_string_list_t icon_urls);
  void(__attribute__((__stdcall__))* on_fullscreen_mode_change)(
      struct _cef_display_handler_t* self,
      struct _cef_browser_t* browser,
      int fullscreen);
  int(__attribute__((__stdcall__))* on_tooltip)(struct _cef_display_handler_t* self,
                                struct _cef_browser_t* browser,
                                cef_string_t* text);





  void(__attribute__((__stdcall__))* on_status_message)(struct _cef_display_handler_t* self,
                                        struct _cef_browser_t* browser,
                                        const cef_string_t* value);





  int(__attribute__((__stdcall__))* on_console_message)(struct _cef_display_handler_t* self,
                                        struct _cef_browser_t* browser,
                                        cef_log_severity_t level,
                                        const cef_string_t* message,
                                        const cef_string_t* source,
                                        int line);







  int(__attribute__((__stdcall__))* on_auto_resize)(struct _cef_display_handler_t* self,
                                    struct _cef_browser_t* browser,
                                    const cef_size_t* new_size);
} cef_display_handler_t;





typedef struct _cef_download_item_t {



  cef_base_ref_counted_t base;





  int(__attribute__((__stdcall__))* is_valid)(struct _cef_download_item_t* self);




  int(__attribute__((__stdcall__))* is_in_progress)(struct _cef_download_item_t* self);




  int(__attribute__((__stdcall__))* is_complete)(struct _cef_download_item_t* self);




  int(__attribute__((__stdcall__))* is_canceled)(struct _cef_download_item_t* self);




  int64(__attribute__((__stdcall__))* get_current_speed)(struct _cef_download_item_t* self);





  int(__attribute__((__stdcall__))* get_percent_complete)(struct _cef_download_item_t* self);




  int64(__attribute__((__stdcall__))* get_total_bytes)(struct _cef_download_item_t* self);




  int64(__attribute__((__stdcall__))* get_received_bytes)(struct _cef_download_item_t* self);




  cef_time_t(__attribute__((__stdcall__))* get_start_time)(struct _cef_download_item_t* self);




  cef_time_t(__attribute__((__stdcall__))* get_end_time)(struct _cef_download_item_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_full_path)(
      struct _cef_download_item_t* self);




  uint32(__attribute__((__stdcall__))* get_id)(struct _cef_download_item_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_url)(
      struct _cef_download_item_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_original_url)(
      struct _cef_download_item_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_suggested_file_name)(
      struct _cef_download_item_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_content_disposition)(
      struct _cef_download_item_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_mime_type)(
      struct _cef_download_item_t* self);
} cef_download_item_t;
typedef struct _cef_before_download_callback_t {



  cef_base_ref_counted_t base;







  void(__attribute__((__stdcall__))* cont)(struct _cef_before_download_callback_t* self,
                           const cef_string_t* download_path,
                           int show_dialog);
} cef_before_download_callback_t;




typedef struct _cef_download_item_callback_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* cancel)(struct _cef_download_item_callback_t* self);




  void(__attribute__((__stdcall__))* pause)(struct _cef_download_item_callback_t* self);




  void(__attribute__((__stdcall__))* resume)(struct _cef_download_item_callback_t* self);
} cef_download_item_callback_t;





typedef struct _cef_download_handler_t {



  cef_base_ref_counted_t base;
  void(__attribute__((__stdcall__))* on_before_download)(
      struct _cef_download_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_download_item_t* download_item,
      const cef_string_t* suggested_name,
      struct _cef_before_download_callback_t* callback);
  void(__attribute__((__stdcall__))* on_download_updated)(
      struct _cef_download_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_download_item_t* download_item,
      struct _cef_download_item_callback_t* callback);
} cef_download_handler_t;

typedef struct _cef_drag_handler_t {



  cef_base_ref_counted_t base;







  int(__attribute__((__stdcall__))* on_drag_enter)(struct _cef_drag_handler_t* self,
                                   struct _cef_browser_t* browser,
                                   struct _cef_drag_data_t* dragData,
                                   cef_drag_operations_mask_t mask);
  void(__attribute__((__stdcall__))* on_draggable_regions_changed)(
      struct _cef_drag_handler_t* self,
      struct _cef_browser_t* browser,
      size_t regionsCount,
      cef_draggable_region_t const* regions);
} cef_drag_handler_t;

typedef struct _cef_find_handler_t {



  cef_base_ref_counted_t base;
  void(__attribute__((__stdcall__))* on_find_result)(struct _cef_find_handler_t* self,
                                     struct _cef_browser_t* browser,
                                     int identifier,
                                     int count,
                                     const cef_rect_t* selectionRect,
                                     int activeMatchOrdinal,
                                     int finalUpdate);
} cef_find_handler_t;

typedef struct _cef_focus_handler_t {



  cef_base_ref_counted_t base;







  void(__attribute__((__stdcall__))* on_take_focus)(struct _cef_focus_handler_t* self,
                                    struct _cef_browser_t* browser,
                                    int next);






  int(__attribute__((__stdcall__))* on_set_focus)(struct _cef_focus_handler_t* self,
                                  struct _cef_browser_t* browser,
                                  cef_focus_source_t source);




  void(__attribute__((__stdcall__))* on_got_focus)(struct _cef_focus_handler_t* self,
                                   struct _cef_browser_t* browser);
} cef_focus_handler_t;

typedef struct _cef_geolocation_callback_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* cont)(struct _cef_geolocation_callback_t* self, int allow);
} cef_geolocation_callback_t;






typedef struct _cef_geolocation_handler_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* on_request_geolocation_permission)(
      struct _cef_geolocation_handler_t* self,
      struct _cef_browser_t* browser,
      const cef_string_t* requesting_url,
      int request_id,
      struct _cef_geolocation_callback_t* callback);





  void(__attribute__((__stdcall__))* on_cancel_geolocation_permission)(
      struct _cef_geolocation_handler_t* self,
      struct _cef_browser_t* browser,
      int request_id);
} cef_geolocation_handler_t;

typedef struct _cef_jsdialog_callback_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* cont)(struct _cef_jsdialog_callback_t* self,
                           int success,
                           const cef_string_t* user_input);
} cef_jsdialog_callback_t;





typedef struct _cef_jsdialog_handler_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* on_jsdialog)(struct _cef_jsdialog_handler_t* self,
                                 struct _cef_browser_t* browser,
                                 const cef_string_t* origin_url,
                                 cef_jsdialog_type_t dialog_type,
                                 const cef_string_t* message_text,
                                 const cef_string_t* default_prompt_text,
                                 struct _cef_jsdialog_callback_t* callback,
                                 int* suppress_message);
  int(__attribute__((__stdcall__))* on_before_unload_dialog)(
      struct _cef_jsdialog_handler_t* self,
      struct _cef_browser_t* browser,
      const cef_string_t* message_text,
      int is_reload,
      struct _cef_jsdialog_callback_t* callback);






  void(__attribute__((__stdcall__))* on_reset_dialog_state)(
      struct _cef_jsdialog_handler_t* self,
      struct _cef_browser_t* browser);




  void(__attribute__((__stdcall__))* on_dialog_closed)(struct _cef_jsdialog_handler_t* self,
                                       struct _cef_browser_t* browser);
} cef_jsdialog_handler_t;

typedef unsigned int        UINT;
typedef unsigned __int64 UINT_PTR, *PUINT_PTR;
typedef UINT_PTR            WPARAM;
typedef __int64 LONG_PTR, *PLONG_PTR;
typedef LONG_PTR            LPARAM;
typedef long LONG;
typedef struct tagPOINT
{
    LONG  x;
    LONG  y;
} POINT;
/*
 * Message structure
 */
typedef struct tagMSG {
    HWND        hwnd;
    UINT        message;
    WPARAM      wParam;
    LPARAM      lParam;
    DWORD       time;
    POINT       pt;
} MSG;
typedef struct _cef_keyboard_handler_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* on_pre_key_event)(struct _cef_keyboard_handler_t* self,
                                      struct _cef_browser_t* browser,
                                      const struct _cef_key_event_t* event,
                                      MSG* os_event,
                                      int* is_keyboard_shortcut);







  int(__attribute__((__stdcall__))* on_key_event)(struct _cef_keyboard_handler_t* self,
                                  struct _cef_browser_t* browser,
                                  const struct _cef_key_event_t* event,
                                  MSG* os_event);
} cef_keyboard_handler_t;

struct _cef_client_t;






typedef struct _cef_life_span_handler_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* on_before_popup)(
      struct _cef_life_span_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      const cef_string_t* target_url,
      const cef_string_t* target_frame_name,
      cef_window_open_disposition_t target_disposition,
      int user_gesture,
      const struct _cef_popup_features_t* popupFeatures,
      struct _cef_window_info_t* windowInfo,
      struct _cef_client_t** client,
      struct _cef_browser_settings_t* settings,
      int* no_javascript_access);





  void(__attribute__((__stdcall__))* on_after_created)(struct _cef_life_span_handler_t* self,
                                       struct _cef_browser_t* browser);
  int(__attribute__((__stdcall__))* do_close)(struct _cef_life_span_handler_t* self,
                              struct _cef_browser_t* browser);
  void(__attribute__((__stdcall__))* on_before_close)(struct _cef_life_span_handler_t* self,
                                      struct _cef_browser_t* browser);
} cef_life_span_handler_t;



struct HICON__{int unused;}; typedef struct HICON__ *HICON;
typedef HICON HCURSOR;      /* HICONs & HCURSORs are polymorphic */
typedef struct _cef_render_handler_t {



  cef_base_ref_counted_t base;





  struct _cef_accessibility_handler_t*(__attribute__((__stdcall__))* get_accessibility_handler)(
      struct _cef_render_handler_t* self);





  int(__attribute__((__stdcall__))* get_root_screen_rect)(struct _cef_render_handler_t* self,
                                          struct _cef_browser_t* browser,
                                          cef_rect_t* rect);





  int(__attribute__((__stdcall__))* get_view_rect)(struct _cef_render_handler_t* self,
                                   struct _cef_browser_t* browser,
                                   cef_rect_t* rect);





  int(__attribute__((__stdcall__))* get_screen_point)(struct _cef_render_handler_t* self,
                                      struct _cef_browser_t* browser,
                                      int viewX,
                                      int viewY,
                                      int* screenX,
                                      int* screenY);
  int(__attribute__((__stdcall__))* get_screen_info)(struct _cef_render_handler_t* self,
                                     struct _cef_browser_t* browser,
                                     struct _cef_screen_info_t* screen_info);





  void(__attribute__((__stdcall__))* on_popup_show)(struct _cef_render_handler_t* self,
                                    struct _cef_browser_t* browser,
                                    int show);





  void(__attribute__((__stdcall__))* on_popup_size)(struct _cef_render_handler_t* self,
                                    struct _cef_browser_t* browser,
                                    const cef_rect_t* rect);
  void(__attribute__((__stdcall__))* on_paint)(struct _cef_render_handler_t* self,
                               struct _cef_browser_t* browser,
                               cef_paint_element_type_t type,
                               size_t dirtyRectsCount,
                               cef_rect_t const* dirtyRects,
                               const void* buffer,
                               int width,
                               int height);





  void(__attribute__((__stdcall__))* on_cursor_change)(
      struct _cef_render_handler_t* self,
      struct _cef_browser_t* browser,
      HCURSOR cursor,
      cef_cursor_type_t type,
      const struct _cef_cursor_info_t* custom_cursor_info);
  int(__attribute__((__stdcall__))* start_dragging)(struct _cef_render_handler_t* self,
                                    struct _cef_browser_t* browser,
                                    struct _cef_drag_data_t* drag_data,
                                    cef_drag_operations_mask_t allowed_ops,
                                    int x,
                                    int y);






  void(__attribute__((__stdcall__))* update_drag_cursor)(struct _cef_render_handler_t* self,
                                         struct _cef_browser_t* browser,
                                         cef_drag_operations_mask_t operation);




  void(__attribute__((__stdcall__))* on_scroll_offset_changed)(
      struct _cef_render_handler_t* self,
      struct _cef_browser_t* browser,
      double x,
      double y);






  void(__attribute__((__stdcall__))* on_ime_composition_range_changed)(
      struct _cef_render_handler_t* self,
      struct _cef_browser_t* browser,
      const cef_range_t* selected_range,
      size_t character_boundsCount,
      cef_rect_t const* character_bounds);
} cef_render_handler_t;


typedef struct _cef_response_filter_t {



  cef_base_ref_counted_t base;





  int(__attribute__((__stdcall__))* init_filter)(struct _cef_response_filter_t* self);
  cef_response_filter_status_t(__attribute__((__stdcall__))* filter)(
      struct _cef_response_filter_t* self,
      void* data_in,
      size_t data_in_size,
      size_t* data_in_read,
      void* data_out,
      size_t data_out_size,
      size_t* data_out_written);
} cef_response_filter_t;

typedef struct _cef_sslinfo_t {



  cef_base_ref_counted_t base;





  cef_cert_status_t(__attribute__((__stdcall__))* get_cert_status)(struct _cef_sslinfo_t* self);




  struct _cef_x509certificate_t*(__attribute__((__stdcall__))* get_x509certificate)(
      struct _cef_sslinfo_t* self);
} cef_sslinfo_t;




__attribute__((visibility("default"))) int cef_is_cert_status_error(cef_cert_status_t status);





__attribute__((visibility("default"))) int cef_is_cert_status_minor_error(cef_cert_status_t status);
typedef struct _cef_request_callback_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* cont)(struct _cef_request_callback_t* self, int allow);




  void(__attribute__((__stdcall__))* cancel)(struct _cef_request_callback_t* self);
} cef_request_callback_t;




typedef struct _cef_select_client_certificate_callback_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* select)(
      struct _cef_select_client_certificate_callback_t* self,
      struct _cef_x509certificate_t* cert);
} cef_select_client_certificate_callback_t;





typedef struct _cef_request_handler_t {



  cef_base_ref_counted_t base;
  int(__attribute__((__stdcall__))* on_before_browse)(struct _cef_request_handler_t* self,
                                      struct _cef_browser_t* browser,
                                      struct _cef_frame_t* frame,
                                      struct _cef_request_t* request,
                                      int is_redirect);
  int(__attribute__((__stdcall__))* on_open_urlfrom_tab)(
      struct _cef_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      const cef_string_t* target_url,
      cef_window_open_disposition_t target_disposition,
      int user_gesture);
  cef_return_value_t(__attribute__((__stdcall__))* on_before_resource_load)(
      struct _cef_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request,
      struct _cef_request_callback_t* callback);







  struct _cef_resource_handler_t*(__attribute__((__stdcall__))* get_resource_handler)(
      struct _cef_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request);
  void(__attribute__((__stdcall__))* on_resource_redirect)(struct _cef_request_handler_t* self,
                                           struct _cef_browser_t* browser,
                                           struct _cef_frame_t* frame,
                                           struct _cef_request_t* request,
                                           struct _cef_response_t* response,
                                           cef_string_t* new_url);







  int(__attribute__((__stdcall__))* on_resource_response)(struct _cef_request_handler_t* self,
                                          struct _cef_browser_t* browser,
                                          struct _cef_frame_t* frame,
                                          struct _cef_request_t* request,
                                          struct _cef_response_t* response);






  struct _cef_response_filter_t*(__attribute__((__stdcall__))* get_resource_response_filter)(
      struct _cef_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request,
      struct _cef_response_t* response);







  void(__attribute__((__stdcall__))* on_resource_load_complete)(
      struct _cef_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request,
      struct _cef_response_t* response,
      cef_urlrequest_status_t status,
      int64 received_content_length);
  int(__attribute__((__stdcall__))* get_auth_credentials)(
      struct _cef_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      int isProxy,
      const cef_string_t* host,
      int port,
      const cef_string_t* realm,
      const cef_string_t* scheme,
      struct _cef_auth_callback_t* callback);







  int(__attribute__((__stdcall__))* can_get_cookies)(struct _cef_request_handler_t* self,
                                     struct _cef_browser_t* browser,
                                     struct _cef_frame_t* frame,
                                     struct _cef_request_t* request);







  int(__attribute__((__stdcall__))* can_set_cookie)(struct _cef_request_handler_t* self,
                                    struct _cef_browser_t* browser,
                                    struct _cef_frame_t* frame,
                                    struct _cef_request_t* request,
                                    const struct _cef_cookie_t* cookie);
  int(__attribute__((__stdcall__))* on_quota_request)(struct _cef_request_handler_t* self,
                                      struct _cef_browser_t* browser,
                                      const cef_string_t* origin_url,
                                      int64 new_size,
                                      struct _cef_request_callback_t* callback);
  void(__attribute__((__stdcall__))* on_protocol_execution)(struct _cef_request_handler_t* self,
                                            struct _cef_browser_t* browser,
                                            const cef_string_t* url,
                                            int* allow_os_execution);
  int(__attribute__((__stdcall__))* on_certificate_error)(
      struct _cef_request_handler_t* self,
      struct _cef_browser_t* browser,
      cef_errorcode_t cert_error,
      const cef_string_t* request_url,
      struct _cef_sslinfo_t* ssl_info,
      struct _cef_request_callback_t* callback);
  int(__attribute__((__stdcall__))* on_select_client_certificate)(
      struct _cef_request_handler_t* self,
      struct _cef_browser_t* browser,
      int isProxy,
      const cef_string_t* host,
      int port,
      size_t certificatesCount,
      struct _cef_x509certificate_t* const* certificates,
      struct _cef_select_client_certificate_callback_t* callback);





  void(__attribute__((__stdcall__))* on_plugin_crashed)(struct _cef_request_handler_t* self,
                                        struct _cef_browser_t* browser,
                                        const cef_string_t* plugin_path);






  void(__attribute__((__stdcall__))* on_render_view_ready)(struct _cef_request_handler_t* self,
                                           struct _cef_browser_t* browser);





  void(__attribute__((__stdcall__))* on_render_process_terminated)(
      struct _cef_request_handler_t* self,
      struct _cef_browser_t* browser,
      cef_termination_status_t status);
} cef_request_handler_t;
typedef struct _cef_client_t {



  cef_base_ref_counted_t base;





  struct _cef_context_menu_handler_t*(__attribute__((__stdcall__))* get_context_menu_handler)(
      struct _cef_client_t* self);





  struct _cef_dialog_handler_t*(__attribute__((__stdcall__))* get_dialog_handler)(
      struct _cef_client_t* self);




  struct _cef_display_handler_t*(__attribute__((__stdcall__))* get_display_handler)(
      struct _cef_client_t* self);





  struct _cef_download_handler_t*(__attribute__((__stdcall__))* get_download_handler)(
      struct _cef_client_t* self);




  struct _cef_drag_handler_t*(__attribute__((__stdcall__))* get_drag_handler)(
      struct _cef_client_t* self);




  struct _cef_find_handler_t*(__attribute__((__stdcall__))* get_find_handler)(
      struct _cef_client_t* self);




  struct _cef_focus_handler_t*(__attribute__((__stdcall__))* get_focus_handler)(
      struct _cef_client_t* self);





  struct _cef_geolocation_handler_t*(__attribute__((__stdcall__))* get_geolocation_handler)(
      struct _cef_client_t* self);





  struct _cef_jsdialog_handler_t*(__attribute__((__stdcall__))* get_jsdialog_handler)(
      struct _cef_client_t* self);




  struct _cef_keyboard_handler_t*(__attribute__((__stdcall__))* get_keyboard_handler)(
      struct _cef_client_t* self);




  struct _cef_life_span_handler_t*(__attribute__((__stdcall__))* get_life_span_handler)(
      struct _cef_client_t* self);




  struct _cef_load_handler_t*(__attribute__((__stdcall__))* get_load_handler)(
      struct _cef_client_t* self);




  struct _cef_render_handler_t*(__attribute__((__stdcall__))* get_render_handler)(
      struct _cef_client_t* self);




  struct _cef_request_handler_t*(__attribute__((__stdcall__))* get_request_handler)(
      struct _cef_client_t* self);






  int(__attribute__((__stdcall__))* on_process_message_received)(
      struct _cef_client_t* self,
      struct _cef_browser_t* browser,
      cef_process_id_t source_process,
      struct _cef_process_message_t* message);
} cef_client_t;




__attribute__((visibility("default"))) int cef_crash_reporting_enabled();




__attribute__((visibility("default"))) void cef_set_crash_key_value(const cef_string_t* key,
                                        const cef_string_t* value);

__attribute__((visibility("default"))) int cef_create_directory(const cef_string_t* full_path);
__attribute__((visibility("default"))) int cef_get_temp_directory(cef_string_t* temp_dir);
__attribute__((visibility("default"))) int cef_create_new_temp_directory(const cef_string_t* prefix,
                                             cef_string_t* new_temp_path);
__attribute__((visibility("default"))) int cef_create_temp_directory_in_directory(
    const cef_string_t* base_dir,
    const cef_string_t* prefix,
    cef_string_t* new_dir);





__attribute__((visibility("default"))) int cef_directory_exists(const cef_string_t* path);
__attribute__((visibility("default"))) int cef_delete_file(const cef_string_t* path, int recursive);







__attribute__((visibility("default"))) int cef_zip_directory(const cef_string_t* src_dir,
                                 const cef_string_t* dest_file,
                                 int include_hidden_files);
__attribute__((visibility("default"))) void cef_load_crlsets_file(const cef_string_t* path);




typedef struct _cef_get_geolocation_callback_t {



  cef_base_ref_counted_t base;





  void(__attribute__((__stdcall__))* on_location_update)(
      struct _cef_get_geolocation_callback_t* self,
      const struct _cef_geoposition_t* position);
} cef_get_geolocation_callback_t;






__attribute__((visibility("default"))) int cef_get_geolocation(cef_get_geolocation_callback_t* callback);

__attribute__((visibility("default"))) int cef_add_cross_origin_whitelist_entry(
    const cef_string_t* source_origin,
    const cef_string_t* target_protocol,
    const cef_string_t* target_domain,
    int allow_target_subdomains);





__attribute__((visibility("default"))) int cef_remove_cross_origin_whitelist_entry(
    const cef_string_t* source_origin,
    const cef_string_t* target_protocol,
    const cef_string_t* target_domain,
    int allow_target_subdomains);





__attribute__((visibility("default"))) int cef_clear_cross_origin_whitelist();

__attribute__((visibility("default"))) int cef_parse_url(const cef_string_t* url,
                             struct _cef_urlparts_t* parts);






__attribute__((visibility("default"))) int cef_create_url(const struct _cef_urlparts_t* parts,
                              cef_string_t* url);
__attribute__((visibility("default"))) cef_string_userfree_t
cef_format_url_for_security_display(const cef_string_t* origin_url);






__attribute__((visibility("default"))) cef_string_userfree_t
cef_get_mime_type(const cef_string_t* extension);







__attribute__((visibility("default"))) void cef_get_extensions_for_mime_type(const cef_string_t* mime_type,
                                                 cef_string_list_t extensions);





__attribute__((visibility("default"))) cef_string_userfree_t cef_base64encode(const void* data,
                                                  size_t data_size);





__attribute__((visibility("default"))) struct _cef_binary_value_t* cef_base64decode(
    const cef_string_t* data);
__attribute__((visibility("default"))) cef_string_userfree_t cef_uriencode(const cef_string_t* text,
                                               int use_plus);
__attribute__((visibility("default"))) cef_string_userfree_t
cef_uridecode(const cef_string_t* text,
              int convert_to_utf8,
              cef_uri_unescape_rule_t unescape_rule);





__attribute__((visibility("default"))) struct _cef_value_t* cef_parse_json(
    const cef_string_t* json_string,
    cef_json_parser_options_t options);







__attribute__((visibility("default"))) struct _cef_value_t* cef_parse_jsonand_return_error(
    const cef_string_t* json_string,
    cef_json_parser_options_t options,
    cef_json_parser_error_t* error_code_out,
    cef_string_t* error_msg_out);







__attribute__((visibility("default"))) cef_string_userfree_t
cef_write_json(struct _cef_value_t* node, cef_json_writer_options_t options);

__attribute__((visibility("default"))) int cef_get_path(cef_path_key_t key, cef_string_t* path);




__attribute__((visibility("default"))) int cef_launch_process(struct _cef_command_line_t* command_line);







typedef struct _cef_resource_bundle_t {



  cef_base_ref_counted_t base;







  cef_string_userfree_t(__attribute__((__stdcall__))* get_localized_string)(
      struct _cef_resource_bundle_t* self,
      int string_id);
  int(__attribute__((__stdcall__))* get_data_resource)(struct _cef_resource_bundle_t* self,
                                       int resource_id,
                                       void** data,
                                       size_t* data_size);
  int(__attribute__((__stdcall__))* get_data_resource_for_scale)(
      struct _cef_resource_bundle_t* self,
      int resource_id,
      cef_scale_factor_t scale_factor,
      void** data,
      size_t* data_size);
} cef_resource_bundle_t;




__attribute__((visibility("default"))) cef_resource_bundle_t* cef_resource_bundle_get_global();






struct _cef_server_handler_t;
typedef struct _cef_server_t {



  cef_base_ref_counted_t base;




  struct _cef_task_runner_t*(__attribute__((__stdcall__))* get_task_runner)(
      struct _cef_server_t* self);






  void(__attribute__((__stdcall__))* shutdown)(struct _cef_server_t* self);







  int(__attribute__((__stdcall__))* is_running)(struct _cef_server_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_address)(struct _cef_server_t* self);





  int(__attribute__((__stdcall__))* has_connection)(struct _cef_server_t* self);





  int(__attribute__((__stdcall__))* is_valid_connection)(struct _cef_server_t* self,
                                         int connection_id);
  void(__attribute__((__stdcall__))* send_http200response)(struct _cef_server_t* self,
                                           int connection_id,
                                           const cef_string_t* content_type,
                                           const void* data,
                                           size_t data_size);






  void(__attribute__((__stdcall__))* send_http404response)(struct _cef_server_t* self,
                                           int connection_id);







  void(__attribute__((__stdcall__))* send_http500response)(struct _cef_server_t* self,
                                           int connection_id,
                                           const cef_string_t* error_message);
  void(__attribute__((__stdcall__))* send_http_response)(struct _cef_server_t* self,
                                         int connection_id,
                                         int response_code,
                                         const cef_string_t* content_type,
                                         int64 content_length,
                                         cef_string_multimap_t extra_headers);
  void(__attribute__((__stdcall__))* send_raw_data)(struct _cef_server_t* self,
                                    int connection_id,
                                    const void* data,
                                    size_t data_size);





  void(__attribute__((__stdcall__))* close_connection)(struct _cef_server_t* self,
                                       int connection_id);







  void(__attribute__((__stdcall__))* send_web_socket_message)(struct _cef_server_t* self,
                                              int connection_id,
                                              const void* data,
                                              size_t data_size);
} cef_server_t;
__attribute__((visibility("default"))) void cef_server_create(const cef_string_t* address,
                                  uint16 port,
                                  int backlog,
                                  struct _cef_server_handler_t* handler);
typedef struct _cef_server_handler_t {



  cef_base_ref_counted_t base;
  void(__attribute__((__stdcall__))* on_server_created)(struct _cef_server_handler_t* self,
                                        struct _cef_server_t* server);







  void(__attribute__((__stdcall__))* on_server_destroyed)(struct _cef_server_handler_t* self,
                                          struct _cef_server_t* server);






  void(__attribute__((__stdcall__))* on_client_connected)(struct _cef_server_handler_t* self,
                                          struct _cef_server_t* server,
                                          int connection_id);
  void(__attribute__((__stdcall__))* on_client_disconnected)(struct _cef_server_handler_t* self,
                                             struct _cef_server_t* server,
                                             int connection_id);
  void(__attribute__((__stdcall__))* on_http_request)(struct _cef_server_handler_t* self,
                                      struct _cef_server_t* server,
                                      int connection_id,
                                      const cef_string_t* client_address,
                                      struct _cef_request_t* request);
  void(__attribute__((__stdcall__))* on_web_socket_request)(struct _cef_server_handler_t* self,
                                            struct _cef_server_t* server,
                                            int connection_id,
                                            const cef_string_t* client_address,
                                            struct _cef_request_t* request,
                                            struct _cef_callback_t* callback);






  void(__attribute__((__stdcall__))* on_web_socket_connected)(
      struct _cef_server_handler_t* self,
      struct _cef_server_t* server,
      int connection_id);
  void(__attribute__((__stdcall__))* on_web_socket_message)(struct _cef_server_handler_t* self,
                                            struct _cef_server_t* server,
                                            int connection_id,
                                            const void* data,
                                            size_t data_size);
} cef_server_handler_t;












typedef DWORD cef_platform_thread_id_t;
__attribute__((visibility("default"))) cef_platform_thread_id_t cef_get_current_platform_thread_id();


typedef DWORD cef_platform_thread_handle_t;
__attribute__((visibility("default"))) cef_platform_thread_handle_t
cef_get_current_platform_thread_handle();
typedef struct _cef_thread_t {



  cef_base_ref_counted_t base;





  struct _cef_task_runner_t*(__attribute__((__stdcall__))* get_task_runner)(
      struct _cef_thread_t* self);





  cef_platform_thread_id_t(__attribute__((__stdcall__))* get_platform_thread_id)(
      struct _cef_thread_t* self);






  void(__attribute__((__stdcall__))* stop)(struct _cef_thread_t* self);





  int(__attribute__((__stdcall__))* is_running)(struct _cef_thread_t* self);
} cef_thread_t;
__attribute__((visibility("default"))) cef_thread_t* cef_thread_create(
    const cef_string_t* display_name,
    cef_thread_priority_t priority,
    cef_message_loop_type_t message_loop_type,
    int stoppable,
    cef_com_init_mode_t com_init_mode);

typedef struct _cef_end_tracing_callback_t {



  cef_base_ref_counted_t base;






  void(__attribute__((__stdcall__))* on_end_tracing_complete)(
      struct _cef_end_tracing_callback_t* self,
      const cef_string_t* tracing_file);
} cef_end_tracing_callback_t;
__attribute__((visibility("default"))) int cef_begin_tracing(const cef_string_t* categories,
                                 struct _cef_completion_callback_t* callback);
__attribute__((visibility("default"))) int cef_end_tracing(const cef_string_t* tracing_file,
                               cef_end_tracing_callback_t* callback);






__attribute__((visibility("default"))) int64 cef_now_from_system_trace_time();

struct _cef_urlrequest_client_t;
typedef struct _cef_urlrequest_t {



  cef_base_ref_counted_t base;





  struct _cef_request_t*(__attribute__((__stdcall__))* get_request)(
      struct _cef_urlrequest_t* self);




  struct _cef_urlrequest_client_t*(__attribute__((__stdcall__))* get_client)(
      struct _cef_urlrequest_t* self);




  cef_urlrequest_status_t(__attribute__((__stdcall__))* get_request_status)(
      struct _cef_urlrequest_t* self);





  cef_errorcode_t(__attribute__((__stdcall__))* get_request_error)(
      struct _cef_urlrequest_t* self);






  struct _cef_response_t*(__attribute__((__stdcall__))* get_response)(
      struct _cef_urlrequest_t* self);





  int(__attribute__((__stdcall__))* response_was_cached)(struct _cef_urlrequest_t* self);




  void(__attribute__((__stdcall__))* cancel)(struct _cef_urlrequest_t* self);
} cef_urlrequest_t;
__attribute__((visibility("default"))) cef_urlrequest_t* cef_urlrequest_create(
    struct _cef_request_t* request,
    struct _cef_urlrequest_client_t* client,
    struct _cef_request_context_t* request_context);






typedef struct _cef_urlrequest_client_t {



  cef_base_ref_counted_t base;






  void(__attribute__((__stdcall__))* on_request_complete)(struct _cef_urlrequest_client_t* self,
                                          struct _cef_urlrequest_t* request);







  void(__attribute__((__stdcall__))* on_upload_progress)(struct _cef_urlrequest_client_t* self,
                                         struct _cef_urlrequest_t* request,
                                         int64 current,
                                         int64 total);






  void(__attribute__((__stdcall__))* on_download_progress)(
      struct _cef_urlrequest_client_t* self,
      struct _cef_urlrequest_t* request,
      int64 current,
      int64 total);






  void(__attribute__((__stdcall__))* on_download_data)(struct _cef_urlrequest_client_t* self,
                                       struct _cef_urlrequest_t* request,
                                       const void* data,
                                       size_t data_length);
  int(__attribute__((__stdcall__))* get_auth_credentials)(
      struct _cef_urlrequest_client_t* self,
      int isProxy,
      const cef_string_t* host,
      int port,
      const cef_string_t* realm,
      const cef_string_t* scheme,
      struct _cef_auth_callback_t* callback);
} cef_urlrequest_client_t;



typedef struct _cef_waitable_event_t {



  cef_base_ref_counted_t base;




  void(__attribute__((__stdcall__))* reset)(struct _cef_waitable_event_t* self);





  void(__attribute__((__stdcall__))* signal)(struct _cef_waitable_event_t* self);






  int(__attribute__((__stdcall__))* is_signaled)(struct _cef_waitable_event_t* self);






  void(__attribute__((__stdcall__))* wait)(struct _cef_waitable_event_t* self);
  int(__attribute__((__stdcall__))* timed_wait)(struct _cef_waitable_event_t* self,
                                int64 max_ms);
} cef_waitable_event_t;
__attribute__((visibility("default"))) cef_waitable_event_t* cef_waitable_event_create(
    int automatic_reset,
    int initially_signaled);



typedef struct _cef_xml_reader_t {



  cef_base_ref_counted_t base;






  int(__attribute__((__stdcall__))* move_to_next_node)(struct _cef_xml_reader_t* self);





  int(__attribute__((__stdcall__))* close)(struct _cef_xml_reader_t* self);




  int(__attribute__((__stdcall__))* has_error)(struct _cef_xml_reader_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_error)(
      struct _cef_xml_reader_t* self);







  cef_xml_node_type_t(__attribute__((__stdcall__))* get_type)(struct _cef_xml_reader_t* self);




  int(__attribute__((__stdcall__))* get_depth)(struct _cef_xml_reader_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_local_name)(
      struct _cef_xml_reader_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_prefix)(
      struct _cef_xml_reader_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_qualified_name)(
      struct _cef_xml_reader_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_namespace_uri)(
      struct _cef_xml_reader_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_base_uri)(
      struct _cef_xml_reader_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_xml_lang)(
      struct _cef_xml_reader_t* self);





  int(__attribute__((__stdcall__))* is_empty_element)(struct _cef_xml_reader_t* self);




  int(__attribute__((__stdcall__))* has_value)(struct _cef_xml_reader_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_value)(
      struct _cef_xml_reader_t* self);




  int(__attribute__((__stdcall__))* has_attributes)(struct _cef_xml_reader_t* self);




  size_t(__attribute__((__stdcall__))* get_attribute_count)(struct _cef_xml_reader_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_attribute_byindex)(
      struct _cef_xml_reader_t* self,
      int index);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_attribute_byqname)(
      struct _cef_xml_reader_t* self,
      const cef_string_t* qualifiedName);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_attribute_bylname)(
      struct _cef_xml_reader_t* self,
      const cef_string_t* localName,
      const cef_string_t* namespaceURI);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_inner_xml)(
      struct _cef_xml_reader_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_outer_xml)(
      struct _cef_xml_reader_t* self);




  int(__attribute__((__stdcall__))* get_line_number)(struct _cef_xml_reader_t* self);
  int(__attribute__((__stdcall__))* move_to_attribute_byindex)(struct _cef_xml_reader_t* self,
                                               int index);





  int(__attribute__((__stdcall__))* move_to_attribute_byqname)(
      struct _cef_xml_reader_t* self,
      const cef_string_t* qualifiedName);






  int(__attribute__((__stdcall__))* move_to_attribute_bylname)(
      struct _cef_xml_reader_t* self,
      const cef_string_t* localName,
      const cef_string_t* namespaceURI);





  int(__attribute__((__stdcall__))* move_to_first_attribute)(struct _cef_xml_reader_t* self);





  int(__attribute__((__stdcall__))* move_to_next_attribute)(struct _cef_xml_reader_t* self);





  int(__attribute__((__stdcall__))* move_to_carrying_element)(struct _cef_xml_reader_t* self);
} cef_xml_reader_t;





__attribute__((visibility("default"))) cef_xml_reader_t* cef_xml_reader_create(
    struct _cef_stream_reader_t* stream,
    cef_xml_encoding_type_t encodingType,
    const cef_string_t* URI);

typedef struct _cef_zip_reader_t {



  cef_base_ref_counted_t base;





  int(__attribute__((__stdcall__))* move_to_first_file)(struct _cef_zip_reader_t* self);





  int(__attribute__((__stdcall__))* move_to_next_file)(struct _cef_zip_reader_t* self);






  int(__attribute__((__stdcall__))* move_to_file)(struct _cef_zip_reader_t* self,
                                  const cef_string_t* fileName,
                                  int caseSensitive);





  int(__attribute__((__stdcall__))* close)(struct _cef_zip_reader_t* self);







  cef_string_userfree_t(__attribute__((__stdcall__))* get_file_name)(
      struct _cef_zip_reader_t* self);




  int64(__attribute__((__stdcall__))* get_file_size)(struct _cef_zip_reader_t* self);




  cef_time_t(__attribute__((__stdcall__))* get_file_last_modified)(
      struct _cef_zip_reader_t* self);





  int(__attribute__((__stdcall__))* open_file)(struct _cef_zip_reader_t* self,
                               const cef_string_t* password);




  int(__attribute__((__stdcall__))* close_file)(struct _cef_zip_reader_t* self);





  int(__attribute__((__stdcall__))* read_file)(struct _cef_zip_reader_t* self,
                               void* buffer,
                               size_t bufferSize);




  int64(__attribute__((__stdcall__))* tell)(struct _cef_zip_reader_t* self);




  int(__attribute__((__stdcall__))* eof)(struct _cef_zip_reader_t* self);
} cef_zip_reader_t;





__attribute__((visibility("default"))) cef_zip_reader_t* cef_zip_reader_create(
    struct _cef_stream_reader_t* stream);










struct _cef_box_layout_t;
struct _cef_fill_layout_t;






typedef struct _cef_layout_t {



  cef_base_ref_counted_t base;




  struct _cef_box_layout_t*(__attribute__((__stdcall__))* as_box_layout)(
      struct _cef_layout_t* self);




  struct _cef_fill_layout_t*(__attribute__((__stdcall__))* as_fill_layout)(
      struct _cef_layout_t* self);




  int(__attribute__((__stdcall__))* is_valid)(struct _cef_layout_t* self);
} cef_layout_t;





struct _cef_view_t;
typedef struct _cef_box_layout_t {



  cef_layout_t base;
  void(__attribute__((__stdcall__))* set_flex_for_view)(struct _cef_box_layout_t* self,
                                        struct _cef_view_t* view,
                                        int flex);





  void(__attribute__((__stdcall__))* clear_flex_for_view)(struct _cef_box_layout_t* self,
                                          struct _cef_view_t* view);
} cef_box_layout_t;














struct _cef_view_t;






typedef struct _cef_view_delegate_t {



  cef_base_ref_counted_t base;





  cef_size_t(__attribute__((__stdcall__))* get_preferred_size)(
      struct _cef_view_delegate_t* self,
      struct _cef_view_t* view);




  cef_size_t(__attribute__((__stdcall__))* get_minimum_size)(struct _cef_view_delegate_t* self,
                                             struct _cef_view_t* view);




  cef_size_t(__attribute__((__stdcall__))* get_maximum_size)(struct _cef_view_delegate_t* self,
                                             struct _cef_view_t* view);







  int(__attribute__((__stdcall__))* get_height_for_width)(struct _cef_view_delegate_t* self,
                                          struct _cef_view_t* view,
                                          int width);
  void(__attribute__((__stdcall__))* on_parent_view_changed)(struct _cef_view_delegate_t* self,
                                             struct _cef_view_t* view,
                                             int added,
                                             struct _cef_view_t* parent);
  void(__attribute__((__stdcall__))* on_child_view_changed)(struct _cef_view_delegate_t* self,
                                            struct _cef_view_t* view,
                                            int added,
                                            struct _cef_view_t* child);




  void(__attribute__((__stdcall__))* on_focus)(struct _cef_view_delegate_t* self,
                               struct _cef_view_t* view);




  void(__attribute__((__stdcall__))* on_blur)(struct _cef_view_delegate_t* self,
                              struct _cef_view_t* view);
} cef_view_delegate_t;





struct _cef_browser_t;
struct _cef_browser_view_t;






typedef struct _cef_browser_view_delegate_t {



  cef_view_delegate_t base;







  void(__attribute__((__stdcall__))* on_browser_created)(
      struct _cef_browser_view_delegate_t* self,
      struct _cef_browser_view_t* browser_view,
      struct _cef_browser_t* browser);







  void(__attribute__((__stdcall__))* on_browser_destroyed)(
      struct _cef_browser_view_delegate_t* self,
      struct _cef_browser_view_t* browser_view,
      struct _cef_browser_t* browser);
  struct _cef_browser_view_delegate_t*(
      __attribute__((__stdcall__))* get_delegate_for_popup_browser_view)(
      struct _cef_browser_view_delegate_t* self,
      struct _cef_browser_view_t* browser_view,
      const struct _cef_browser_settings_t* settings,
      struct _cef_client_t* client,
      int is_devtools);
  int(__attribute__((__stdcall__))* on_popup_browser_view_created)(
      struct _cef_browser_view_delegate_t* self,
      struct _cef_browser_view_t* browser_view,
      struct _cef_browser_view_t* popup_browser_view,
      int is_devtools);
} cef_browser_view_delegate_t;








struct _cef_browser_view_t;
struct _cef_button_t;
struct _cef_panel_t;
struct _cef_scroll_view_t;
struct _cef_textfield_t;
struct _cef_window_t;







typedef struct _cef_view_t {



  cef_base_ref_counted_t base;




  struct _cef_browser_view_t*(__attribute__((__stdcall__))* as_browser_view)(
      struct _cef_view_t* self);




  struct _cef_button_t*(__attribute__((__stdcall__))* as_button)(struct _cef_view_t* self);




  struct _cef_panel_t*(__attribute__((__stdcall__))* as_panel)(struct _cef_view_t* self);




  struct _cef_scroll_view_t*(__attribute__((__stdcall__))* as_scroll_view)(
      struct _cef_view_t* self);




  struct _cef_textfield_t*(__attribute__((__stdcall__))* as_textfield)(
      struct _cef_view_t* self);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_type_string)(
      struct _cef_view_t* self);
  cef_string_userfree_t(__attribute__((__stdcall__))* to_string)(struct _cef_view_t* self,
                                                 int include_children);




  int(__attribute__((__stdcall__))* is_valid)(struct _cef_view_t* self);





  int(__attribute__((__stdcall__))* is_attached)(struct _cef_view_t* self);




  int(__attribute__((__stdcall__))* is_same)(struct _cef_view_t* self,
                             struct _cef_view_t* that);




  struct _cef_view_delegate_t*(__attribute__((__stdcall__))* get_delegate)(
      struct _cef_view_t* self);




  struct _cef_window_t*(__attribute__((__stdcall__))* get_window)(struct _cef_view_t* self);




  int(__attribute__((__stdcall__))* get_id)(struct _cef_view_t* self);





  void(__attribute__((__stdcall__))* set_id)(struct _cef_view_t* self, int id);




  int(__attribute__((__stdcall__))* get_group_id)(struct _cef_view_t* self);






  void(__attribute__((__stdcall__))* set_group_id)(struct _cef_view_t* self, int group_id);




  struct _cef_view_t*(__attribute__((__stdcall__))* get_parent_view)(struct _cef_view_t* self);






  struct _cef_view_t*(__attribute__((__stdcall__))* get_view_for_id)(struct _cef_view_t* self,
                                                     int id);





  void(__attribute__((__stdcall__))* set_bounds)(struct _cef_view_t* self,
                                 const cef_rect_t* bounds);





  cef_rect_t(__attribute__((__stdcall__))* get_bounds)(struct _cef_view_t* self);





  cef_rect_t(__attribute__((__stdcall__))* get_bounds_in_screen)(struct _cef_view_t* self);




  void(__attribute__((__stdcall__))* set_size)(struct _cef_view_t* self,
                               const cef_size_t* size);




  cef_size_t(__attribute__((__stdcall__))* get_size)(struct _cef_view_t* self);





  void(__attribute__((__stdcall__))* set_position)(struct _cef_view_t* self,
                                   const cef_point_t* position);




  cef_point_t(__attribute__((__stdcall__))* get_position)(struct _cef_view_t* self);




  cef_size_t(__attribute__((__stdcall__))* get_preferred_size)(struct _cef_view_t* self);




  void(__attribute__((__stdcall__))* size_to_preferred_size)(struct _cef_view_t* self);




  cef_size_t(__attribute__((__stdcall__))* get_minimum_size)(struct _cef_view_t* self);




  cef_size_t(__attribute__((__stdcall__))* get_maximum_size)(struct _cef_view_t* self);




  int(__attribute__((__stdcall__))* get_height_for_width)(struct _cef_view_t* self, int width);






  void(__attribute__((__stdcall__))* invalidate_layout)(struct _cef_view_t* self);
  void(__attribute__((__stdcall__))* set_visible)(struct _cef_view_t* self, int visible);
  int(__attribute__((__stdcall__))* is_visible)(struct _cef_view_t* self);
  int(__attribute__((__stdcall__))* is_drawn)(struct _cef_view_t* self);






  void(__attribute__((__stdcall__))* set_enabled)(struct _cef_view_t* self, int enabled);




  int(__attribute__((__stdcall__))* is_enabled)(struct _cef_view_t* self);






  void(__attribute__((__stdcall__))* set_focusable)(struct _cef_view_t* self, int focusable);




  int(__attribute__((__stdcall__))* is_focusable)(struct _cef_view_t* self);





  int(__attribute__((__stdcall__))* is_accessibility_focusable)(struct _cef_view_t* self);





  void(__attribute__((__stdcall__))* request_focus)(struct _cef_view_t* self);




  void(__attribute__((__stdcall__))* set_background_color)(struct _cef_view_t* self,
                                           cef_color_t color);




  cef_color_t(__attribute__((__stdcall__))* get_background_color)(struct _cef_view_t* self);
  int(__attribute__((__stdcall__))* convert_point_to_screen)(struct _cef_view_t* self,
                                             cef_point_t* point);
  int(__attribute__((__stdcall__))* convert_point_from_screen)(struct _cef_view_t* self,
                                               cef_point_t* point);






  int(__attribute__((__stdcall__))* convert_point_to_window)(struct _cef_view_t* self,
                                             cef_point_t* point);






  int(__attribute__((__stdcall__))* convert_point_from_window)(struct _cef_view_t* self,
                                               cef_point_t* point);







  int(__attribute__((__stdcall__))* convert_point_to_view)(struct _cef_view_t* self,
                                           struct _cef_view_t* view,
                                           cef_point_t* point);






  int(__attribute__((__stdcall__))* convert_point_from_view)(struct _cef_view_t* self,
                                             struct _cef_view_t* view,
                                             cef_point_t* point);
} cef_view_t;
typedef struct _cef_browser_view_t {



  cef_view_t base;





  struct _cef_browser_t*(__attribute__((__stdcall__))* get_browser)(
      struct _cef_browser_view_t* self);
  void(__attribute__((__stdcall__))* set_prefer_accelerators)(struct _cef_browser_view_t* self,
                                              int prefer_accelerators);
} cef_browser_view_t;





__attribute__((visibility("default"))) cef_browser_view_t* cef_browser_view_create(
    struct _cef_client_t* client,
    const cef_string_t* url,
    const struct _cef_browser_settings_t* settings,
    struct _cef_request_context_t* request_context,
    struct _cef_browser_view_delegate_t* delegate);




__attribute__((visibility("default"))) cef_browser_view_t* cef_browser_view_get_for_browser(
    struct _cef_browser_t* browser);









struct _cef_label_button_t;






typedef struct _cef_button_t {



  cef_view_t base;




  struct _cef_label_button_t*(__attribute__((__stdcall__))* as_label_button)(
      struct _cef_button_t* self);




  void(__attribute__((__stdcall__))* set_state)(struct _cef_button_t* self,
                                cef_button_state_t state);




  cef_button_state_t(__attribute__((__stdcall__))* get_state)(struct _cef_button_t* self);




  void(__attribute__((__stdcall__))* set_ink_drop_enabled)(struct _cef_button_t* self,
                                           int enabled);





  void(__attribute__((__stdcall__))* set_tooltip_text)(struct _cef_button_t* self,
                                       const cef_string_t* tooltip_text);




  void(__attribute__((__stdcall__))* set_accessible_name)(struct _cef_button_t* self,
                                          const cef_string_t* name);
} cef_button_t;








struct _cef_button_t;






typedef struct _cef_button_delegate_t {



  cef_view_delegate_t base;




  void(__attribute__((__stdcall__))* on_button_pressed)(struct _cef_button_delegate_t* self,
                                        struct _cef_button_t* button);




  void(__attribute__((__stdcall__))* on_button_state_changed)(
      struct _cef_button_delegate_t* self,
      struct _cef_button_t* button);
} cef_button_delegate_t;

typedef struct _cef_display_t {



  cef_base_ref_counted_t base;




  int64(__attribute__((__stdcall__))* get_id)(struct _cef_display_t* self);







  float(__attribute__((__stdcall__))* get_device_scale_factor)(struct _cef_display_t* self);





  void(__attribute__((__stdcall__))* convert_point_to_pixels)(struct _cef_display_t* self,
                                              cef_point_t* point);





  void(__attribute__((__stdcall__))* convert_point_from_pixels)(struct _cef_display_t* self,
                                                cef_point_t* point);




  cef_rect_t(__attribute__((__stdcall__))* get_bounds)(struct _cef_display_t* self);





  cef_rect_t(__attribute__((__stdcall__))* get_work_area)(struct _cef_display_t* self);




  int(__attribute__((__stdcall__))* get_rotation)(struct _cef_display_t* self);
} cef_display_t;




__attribute__((visibility("default"))) cef_display_t* cef_display_get_primary();





__attribute__((visibility("default"))) cef_display_t* cef_display_get_nearest_point(
    const cef_point_t* point,
    int input_pixel_coords);






__attribute__((visibility("default"))) cef_display_t* cef_display_get_matching_bounds(
    const cef_rect_t* bounds,
    int input_pixel_coords);





__attribute__((visibility("default"))) size_t cef_display_get_count();





__attribute__((visibility("default"))) void cef_display_get_alls(size_t* displaysCount,
                                     cef_display_t** displays);

typedef struct _cef_fill_layout_t {



  cef_layout_t base;
} cef_fill_layout_t;

struct _cef_menu_button_t;





typedef struct _cef_label_button_t {



  cef_button_t base;





  struct _cef_menu_button_t*(__attribute__((__stdcall__))* as_menu_button)(
      struct _cef_label_button_t* self);





  void(__attribute__((__stdcall__))* set_text)(struct _cef_label_button_t* self,
                               const cef_string_t* text);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_text)(
      struct _cef_label_button_t* self);






  void(__attribute__((__stdcall__))* set_image)(struct _cef_label_button_t* self,
                                cef_button_state_t button_state,
                                struct _cef_image_t* image);





  struct _cef_image_t*(__attribute__((__stdcall__))* get_image)(
      struct _cef_label_button_t* self,
      cef_button_state_t button_state);




  void(__attribute__((__stdcall__))* set_text_color)(struct _cef_label_button_t* self,
                                     cef_button_state_t for_state,
                                     cef_color_t color);




  void(__attribute__((__stdcall__))* set_enabled_text_colors)(struct _cef_label_button_t* self,
                                              cef_color_t color);
  void(__attribute__((__stdcall__))* set_font_list)(struct _cef_label_button_t* self,
                                    const cef_string_t* font_list);





  void(__attribute__((__stdcall__))* set_horizontal_alignment)(
      struct _cef_label_button_t* self,
      cef_horizontal_alignment_t alignment);




  void(__attribute__((__stdcall__))* set_minimum_size)(struct _cef_label_button_t* self,
                                       const cef_size_t* size);




  void(__attribute__((__stdcall__))* set_maximum_size)(struct _cef_label_button_t* self,
                                       const cef_size_t* size);
} cef_label_button_t;
__attribute__((visibility("default"))) cef_label_button_t* cef_label_button_create(
    struct _cef_button_delegate_t* delegate,
    const cef_string_t* text,
    int with_frame);













struct _cef_menu_button_t;




typedef struct _cef_menu_button_pressed_lock_t {



  cef_base_ref_counted_t base;
} cef_menu_button_pressed_lock_t;






typedef struct _cef_menu_button_delegate_t {



  cef_button_delegate_t base;







  void(__attribute__((__stdcall__))* on_menu_button_pressed)(
      struct _cef_menu_button_delegate_t* self,
      struct _cef_menu_button_t* menu_button,
      const cef_point_t* screen_point,
      struct _cef_menu_button_pressed_lock_t* button_pressed_lock);
} cef_menu_button_delegate_t;
typedef struct _cef_menu_button_t {



  cef_label_button_t base;







  void(__attribute__((__stdcall__))* show_menu)(struct _cef_menu_button_t* self,
                                struct _cef_menu_model_t* menu_model,
                                const cef_point_t* screen_point,
                                cef_menu_anchor_position_t anchor_position);





  void(__attribute__((__stdcall__))* trigger_menu)(struct _cef_menu_button_t* self);
} cef_menu_button_t;
__attribute__((visibility("default"))) cef_menu_button_t* cef_menu_button_create(
    struct _cef_menu_button_delegate_t* delegate,
    const cef_string_t* text,
    int with_frame,
    int with_menu_marker);




typedef struct _cef_panel_delegate_t {



  cef_view_delegate_t base;
} cef_panel_delegate_t;






struct _cef_box_layout_t;
struct _cef_fill_layout_t;
struct _cef_layout_t;
struct _cef_window_t;






typedef struct _cef_panel_t {



  cef_view_t base;




  struct _cef_window_t*(__attribute__((__stdcall__))* as_window)(struct _cef_panel_t* self);




  struct _cef_fill_layout_t*(__attribute__((__stdcall__))* set_to_fill_layout)(
      struct _cef_panel_t* self);




  struct _cef_box_layout_t*(__attribute__((__stdcall__))* set_to_box_layout)(
      struct _cef_panel_t* self,
      const struct _cef_box_layout_settings_t* settings);




  struct _cef_layout_t*(__attribute__((__stdcall__))* get_layout)(struct _cef_panel_t* self);





  void(__attribute__((__stdcall__))* layout)(struct _cef_panel_t* self);




  void(__attribute__((__stdcall__))* add_child_view)(struct _cef_panel_t* self,
                                     struct _cef_view_t* view);





  void(__attribute__((__stdcall__))* add_child_view_at)(struct _cef_panel_t* self,
                                        struct _cef_view_t* view,
                                        int index);





  void(__attribute__((__stdcall__))* reorder_child_view)(struct _cef_panel_t* self,
                                         struct _cef_view_t* view,
                                         int index);




  void(__attribute__((__stdcall__))* remove_child_view)(struct _cef_panel_t* self,
                                        struct _cef_view_t* view);





  void(__attribute__((__stdcall__))* remove_all_child_views)(struct _cef_panel_t* self);




  size_t(__attribute__((__stdcall__))* get_child_view_count)(struct _cef_panel_t* self);




  struct _cef_view_t*(
      __attribute__((__stdcall__))* get_child_view_at)(struct _cef_panel_t* self, int index);
} cef_panel_t;




__attribute__((visibility("default"))) cef_panel_t* cef_panel_create(
    struct _cef_panel_delegate_t* delegate);


typedef struct _cef_scroll_view_t {



  cef_view_t base;





  void(__attribute__((__stdcall__))* set_content_view)(struct _cef_scroll_view_t* self,
                                       struct _cef_view_t* view);




  struct _cef_view_t*(__attribute__((__stdcall__))* get_content_view)(
      struct _cef_scroll_view_t* self);




  cef_rect_t(__attribute__((__stdcall__))* get_visible_content_rect)(
      struct _cef_scroll_view_t* self);




  int(__attribute__((__stdcall__))* has_horizontal_scrollbar)(struct _cef_scroll_view_t* self);




  int(__attribute__((__stdcall__))* get_horizontal_scrollbar_height)(
      struct _cef_scroll_view_t* self);




  int(__attribute__((__stdcall__))* has_vertical_scrollbar)(struct _cef_scroll_view_t* self);




  int(__attribute__((__stdcall__))* get_vertical_scrollbar_width)(
      struct _cef_scroll_view_t* self);
} cef_scroll_view_t;




__attribute__((visibility("default"))) cef_scroll_view_t* cef_scroll_view_create(
    struct _cef_view_delegate_t* delegate);










struct _cef_textfield_t;






typedef struct _cef_textfield_delegate_t {



  cef_view_delegate_t base;






  int(__attribute__((__stdcall__))* on_key_event)(struct _cef_textfield_delegate_t* self,
                                  struct _cef_textfield_t* textfield,
                                  const struct _cef_key_event_t* event);




  void(__attribute__((__stdcall__))* on_after_user_action)(
      struct _cef_textfield_delegate_t* self,
      struct _cef_textfield_t* textfield);
} cef_textfield_delegate_t;
typedef struct _cef_textfield_t {



  cef_view_t base;




  void(__attribute__((__stdcall__))* set_password_input)(struct _cef_textfield_t* self,
                                         int password_input);




  int(__attribute__((__stdcall__))* is_password_input)(struct _cef_textfield_t* self);




  void(__attribute__((__stdcall__))* set_read_only)(struct _cef_textfield_t* self,
                                    int read_only);




  int(__attribute__((__stdcall__))* is_read_only)(struct _cef_textfield_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_text)(struct _cef_textfield_t* self);





  void(__attribute__((__stdcall__))* set_text)(struct _cef_textfield_t* self,
                               const cef_string_t* text);




  void(__attribute__((__stdcall__))* append_text)(struct _cef_textfield_t* self,
                                  const cef_string_t* text);




  void(__attribute__((__stdcall__))* insert_or_replace_text)(struct _cef_textfield_t* self,
                                             const cef_string_t* text);




  int(__attribute__((__stdcall__))* has_selection)(struct _cef_textfield_t* self);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_selected_text)(
      struct _cef_textfield_t* self);






  void(__attribute__((__stdcall__))* select_all)(struct _cef_textfield_t* self, int reversed);




  void(__attribute__((__stdcall__))* clear_selection)(struct _cef_textfield_t* self);




  cef_range_t(__attribute__((__stdcall__))* get_selected_range)(struct _cef_textfield_t* self);




  void(__attribute__((__stdcall__))* select_range)(struct _cef_textfield_t* self,
                                   const cef_range_t* range);




  size_t(__attribute__((__stdcall__))* get_cursor_position)(struct _cef_textfield_t* self);




  void(__attribute__((__stdcall__))* set_text_color)(struct _cef_textfield_t* self,
                                     cef_color_t color);




  cef_color_t(__attribute__((__stdcall__))* get_text_color)(struct _cef_textfield_t* self);




  void(__attribute__((__stdcall__))* set_selection_text_color)(struct _cef_textfield_t* self,
                                               cef_color_t color);




  cef_color_t(__attribute__((__stdcall__))* get_selection_text_color)(
      struct _cef_textfield_t* self);




  void(__attribute__((__stdcall__))* set_selection_background_color)(
      struct _cef_textfield_t* self,
      cef_color_t color);




  cef_color_t(__attribute__((__stdcall__))* get_selection_background_color)(
      struct _cef_textfield_t* self);
  void(__attribute__((__stdcall__))* set_font_list)(struct _cef_textfield_t* self,
                                    const cef_string_t* font_list);






  void(__attribute__((__stdcall__))* apply_text_color)(struct _cef_textfield_t* self,
                                       cef_color_t color,
                                       const cef_range_t* range);







  void(__attribute__((__stdcall__))* apply_text_style)(struct _cef_textfield_t* self,
                                       cef_text_style_t style,
                                       int add,
                                       const cef_range_t* range);





  int(__attribute__((__stdcall__))* is_command_enabled)(struct _cef_textfield_t* self,
                                        int command_id);







  void(__attribute__((__stdcall__))* execute_command)(struct _cef_textfield_t* self,
                                      int command_id);




  void(__attribute__((__stdcall__))* clear_edit_history)(struct _cef_textfield_t* self);





  void(__attribute__((__stdcall__))* set_placeholder_text)(struct _cef_textfield_t* self,
                                           const cef_string_t* text);






  cef_string_userfree_t(__attribute__((__stdcall__))* get_placeholder_text)(
      struct _cef_textfield_t* self);




  void(__attribute__((__stdcall__))* set_placeholder_text_color)(struct _cef_textfield_t* self,
                                                 cef_color_t color);




  void(__attribute__((__stdcall__))* set_accessible_name)(struct _cef_textfield_t* self,
                                          const cef_string_t* name);
} cef_textfield_t;




__attribute__((visibility("default"))) cef_textfield_t* cef_textfield_create(
    struct _cef_textfield_delegate_t* delegate);

















struct _cef_window_t;






typedef struct _cef_window_delegate_t {



  cef_panel_delegate_t base;




  void(__attribute__((__stdcall__))* on_window_created)(struct _cef_window_delegate_t* self,
                                        struct _cef_window_t* window);






  void(__attribute__((__stdcall__))* on_window_destroyed)(struct _cef_window_delegate_t* self,
                                          struct _cef_window_t* window);
  struct _cef_window_t*(__attribute__((__stdcall__))* get_parent_window)(
      struct _cef_window_delegate_t* self,
      struct _cef_window_t* window,
      int* is_menu,
      int* can_activate_menu);






  int(__attribute__((__stdcall__))* is_frameless)(struct _cef_window_delegate_t* self,
                                  struct _cef_window_t* window);




  int(__attribute__((__stdcall__))* can_resize)(struct _cef_window_delegate_t* self,
                                struct _cef_window_t* window);




  int(__attribute__((__stdcall__))* can_maximize)(struct _cef_window_delegate_t* self,
                                  struct _cef_window_t* window);




  int(__attribute__((__stdcall__))* can_minimize)(struct _cef_window_delegate_t* self,
                                  struct _cef_window_t* window);





  int(__attribute__((__stdcall__))* can_close)(struct _cef_window_delegate_t* self,
                               struct _cef_window_t* window);






  int(__attribute__((__stdcall__))* on_accelerator)(struct _cef_window_delegate_t* self,
                                    struct _cef_window_t* window,
                                    int command_id);






  int(__attribute__((__stdcall__))* on_key_event)(struct _cef_window_delegate_t* self,
                                  struct _cef_window_t* window,
                                  const struct _cef_key_event_t* event);
} cef_window_delegate_t;
typedef struct _cef_window_t {



  cef_panel_t base;




  void(__attribute__((__stdcall__))* show)(struct _cef_window_t* self);




  void(__attribute__((__stdcall__))* hide)(struct _cef_window_t* self);




  void(__attribute__((__stdcall__))* center_window)(struct _cef_window_t* self,
                                    const cef_size_t* size);




  void(__attribute__((__stdcall__))* close)(struct _cef_window_t* self);




  int(__attribute__((__stdcall__))* is_closed)(struct _cef_window_t* self);




  void(__attribute__((__stdcall__))* activate)(struct _cef_window_t* self);





  void(__attribute__((__stdcall__))* deactivate)(struct _cef_window_t* self);




  int(__attribute__((__stdcall__))* is_active)(struct _cef_window_t* self);




  void(__attribute__((__stdcall__))* bring_to_top)(struct _cef_window_t* self);




  void(__attribute__((__stdcall__))* set_always_on_top)(struct _cef_window_t* self, int on_top);





  int(__attribute__((__stdcall__))* is_always_on_top)(struct _cef_window_t* self);




  void(__attribute__((__stdcall__))* maximize)(struct _cef_window_t* self);




  void(__attribute__((__stdcall__))* minimize)(struct _cef_window_t* self);




  void(__attribute__((__stdcall__))* restore)(struct _cef_window_t* self);




  void(__attribute__((__stdcall__))* set_fullscreen)(struct _cef_window_t* self,
                                     int fullscreen);




  int(__attribute__((__stdcall__))* is_maximized)(struct _cef_window_t* self);




  int(__attribute__((__stdcall__))* is_minimized)(struct _cef_window_t* self);




  int(__attribute__((__stdcall__))* is_fullscreen)(struct _cef_window_t* self);




  void(__attribute__((__stdcall__))* set_title)(struct _cef_window_t* self,
                                const cef_string_t* title);





  cef_string_userfree_t(__attribute__((__stdcall__))* get_title)(struct _cef_window_t* self);





  void(__attribute__((__stdcall__))* set_window_icon)(struct _cef_window_t* self,
                                      struct _cef_image_t* image);




  struct _cef_image_t*(__attribute__((__stdcall__))* get_window_icon)(
      struct _cef_window_t* self);







  void(__attribute__((__stdcall__))* set_window_app_icon)(struct _cef_window_t* self,
                                          struct _cef_image_t* image);




  struct _cef_image_t*(__attribute__((__stdcall__))* get_window_app_icon)(
      struct _cef_window_t* self);






  void(__attribute__((__stdcall__))* show_menu)(struct _cef_window_t* self,
                                struct _cef_menu_model_t* menu_model,
                                const cef_point_t* screen_point,
                                cef_menu_anchor_position_t anchor_position);




  void(__attribute__((__stdcall__))* cancel_menu)(struct _cef_window_t* self);





  struct _cef_display_t*(__attribute__((__stdcall__))* get_display)(struct _cef_window_t* self);





  cef_rect_t(__attribute__((__stdcall__))* get_client_area_bounds_in_screen)(
      struct _cef_window_t* self);







  void(__attribute__((__stdcall__))* set_draggable_regions)(
      struct _cef_window_t* self,
      size_t regionsCount,
      cef_draggable_region_t const* regions);




  HWND(__attribute__((__stdcall__))* get_window_handle)(
      struct _cef_window_t* self);
  void(__attribute__((__stdcall__))* send_key_press)(struct _cef_window_t* self,
                                     int key_code,
                                     uint32 event_flags);






  void(__attribute__((__stdcall__))* send_mouse_move)(struct _cef_window_t* self,
                                      int screen_x,
                                      int screen_y);
  void(__attribute__((__stdcall__))* send_mouse_events)(struct _cef_window_t* self,
                                        cef_mouse_button_type_t button,
                                        int mouse_down,
                                        int mouse_up);







  void(__attribute__((__stdcall__))* set_accelerator)(struct _cef_window_t* self,
                                      int command_id,
                                      int key_code,
                                      int shift_pressed,
                                      int ctrl_pressed,
                                      int alt_pressed);




  void(__attribute__((__stdcall__))* remove_accelerator)(struct _cef_window_t* self,
                                         int command_id);




  void(__attribute__((__stdcall__))* remove_all_accelerators)(struct _cef_window_t* self);
} cef_window_t;




__attribute__((visibility("default"))) cef_window_t* cef_window_create_top_level(
    struct _cef_window_delegate_t* delegate);
