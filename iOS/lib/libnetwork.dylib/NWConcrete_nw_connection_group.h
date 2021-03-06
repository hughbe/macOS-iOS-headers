/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_connection_group : NSObject <OS_nw_connection_group> {
    unsigned int  client_qos_class;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_array> * connections;
    char * description;
    NSObject<OS_nw_group_descriptor> * group_descriptor;
    unsigned short  initial_port;
    NWConcrete_nw_connection_group * internally_retained_object;
    NSObject<OS_nw_error> * last_error;
    NSObject<OS_nw_listener> * listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned int  log_id;
    unsigned int  maximum_message_size;
    id /* block */  message_preview_handler;
    NSObject<OS_nw_parameters> * parameters;
    id /* block */  receive_handler;
    char * redacted_description;
    unsigned int  reject_oversized_messages;
    unsigned int  started;
    int  state;
    id /* block */  state_changed_handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)redactedDescription;

@end
