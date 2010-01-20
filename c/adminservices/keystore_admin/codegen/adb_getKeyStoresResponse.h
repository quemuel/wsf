

        #ifndef ADB_GETKEYSTORESRESPONSE_H
        #define ADB_GETKEYSTORESRESPONSE_H

       /**
        * adb_getKeyStoresResponse.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: #axisVersion# #today#
        */

       /**
        *  adb_getKeyStoresResponse class
        */

        
          #include "adb_KeyStoreData.h"
          

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_getKeyStoresResponse adb_getKeyStoresResponse_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_getKeyStoresResponse_t
         * @param env pointer to environment struct
         * @return newly created adb_getKeyStoresResponse_t object
         */
        adb_getKeyStoresResponse_t* AXIS2_CALL
        adb_getKeyStoresResponse_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getKeyStoresResponse_free (
            adb_getKeyStoresResponse_t* _getKeyStoresResponse,
            const axutil_env_t *env);

        /**
         * Free adb_getKeyStoresResponse_t object
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getKeyStoresResponse_free_obj (
            adb_getKeyStoresResponse_t* _getKeyStoresResponse,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for return. Deprecated for array types, Use adb_getKeyStoresResponse_get_return_at instead
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @return Array of adb_KeyStoreData_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_getKeyStoresResponse_get_return(
            adb_getKeyStoresResponse_t* _getKeyStoresResponse,
            const axutil_env_t *env);

        /**
         * Setter for return.Deprecated for array types, Use adb_getKeyStoresResponse_set_return_at
         * or adb_getKeyStoresResponse_add_return instead.
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @param arg_return Array of adb_KeyStoreData_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getKeyStoresResponse_set_return(
            adb_getKeyStoresResponse_t* _getKeyStoresResponse,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_return);

        /**
         * Resetter for return
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getKeyStoresResponse_reset_return(
            adb_getKeyStoresResponse_t* _getKeyStoresResponse,
            const axutil_env_t *env);

        
        /****************************** Getters and Setters For Arrays **********************************/
        /************ Array Specific Operations: get_at, set_at, add, remove_at, sizeof *****************/

        /**
         * E.g. use of get_at, set_at, add and sizeof
         *
         * for(i = 0; i < adb_element_sizeof_property(adb_object, env); i ++ )
         * {
         *     // Getting ith value to property_object variable
         *     property_object = adb_element_get_property_at(adb_object, env, i);
         *
         *     // Setting ith value from property_object variable
         *     adb_element_set_property_at(adb_object, env, i, property_object);
         *
         *     // Appending the value to the end of the array from property_object variable
         *     adb_element_add_property(adb_object, env, property_object);
         *
         *     // Removing the ith value from an array
         *     adb_element_remove_property_at(adb_object, env, i);
         *     
         * }
         *
         */

        
        
        /**
         * Get the ith element of return.
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_KeyStoreData_t* of the array
         */
        adb_KeyStoreData_t* AXIS2_CALL
        adb_getKeyStoresResponse_get_return_at(
                adb_getKeyStoresResponse_t* _getKeyStoresResponse,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of return. (If the ith already exist, it will be replaced)
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_return element to set adb_KeyStoreData_t* to the array
         * @return ith adb_KeyStoreData_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_getKeyStoresResponse_set_return_at(
                adb_getKeyStoresResponse_t* _getKeyStoresResponse,
                const axutil_env_t *env, int i,
                adb_KeyStoreData_t* arg_return);


        /**
         * Add to return.
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @param arg_return element to add adb_KeyStoreData_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getKeyStoresResponse_add_return(
                adb_getKeyStoresResponse_t* _getKeyStoresResponse,
                const axutil_env_t *env,
                adb_KeyStoreData_t* arg_return);

        /**
         * Get the size of the return array.
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct.
         * @return the size of the return array.
         */
        int AXIS2_CALL
        adb_getKeyStoresResponse_sizeof_return(
                    adb_getKeyStoresResponse_t* _getKeyStoresResponse,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of return.
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getKeyStoresResponse_remove_return_at(
                adb_getKeyStoresResponse_t* _getKeyStoresResponse,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether return is nill
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_getKeyStoresResponse_is_return_nil(
                adb_getKeyStoresResponse_t* _getKeyStoresResponse,
                const axutil_env_t *env);


        
        /**
         * Set return to nill (currently the same as reset)
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getKeyStoresResponse_set_return_nil(
                adb_getKeyStoresResponse_t* _getKeyStoresResponse,
                const axutil_env_t *env);
        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether return is nill at i
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_getKeyStoresResponse_is_return_nil_at(
                adb_getKeyStoresResponse_t* _getKeyStoresResponse,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set return to nill at i
         * @param  _getKeyStoresResponse _ adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_getKeyStoresResponse_set_return_nil_at(
                adb_getKeyStoresResponse_t* _getKeyStoresResponse, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getKeyStoresResponse_deserialize(
            adb_getKeyStoresResponse_t* _getKeyStoresResponse,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_getKeyStoresResponse_deserialize_obj(
            adb_getKeyStoresResponse_t* _getKeyStoresResponse,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_getKeyStoresResponse_declare_parent_namespaces(
                    adb_getKeyStoresResponse_t* _getKeyStoresResponse,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @param getKeyStoresResponse_om_node node to serialize from
         * @param getKeyStoresResponse_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_getKeyStoresResponse_serialize(
            adb_getKeyStoresResponse_t* _getKeyStoresResponse,
            const axutil_env_t *env,
            axiom_node_t* getKeyStoresResponse_om_node, axiom_element_t *getKeyStoresResponse_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @param getKeyStoresResponse_om_node node to serialize from
         * @param getKeyStoresResponse_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_getKeyStoresResponse_serialize_obj(
            adb_getKeyStoresResponse_t* _getKeyStoresResponse,
            const axutil_env_t *env,
            axiom_node_t* getKeyStoresResponse_om_node, axiom_element_t *getKeyStoresResponse_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_getKeyStoresResponse is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_getKeyStoresResponse_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_getKeyStoresResponse_t
         * @param env pointer to environment struct
         * @param _return axutil_array_list_t*
         * @return newly created adb_getKeyStoresResponse_t object
         */
        adb_getKeyStoresResponse_t* AXIS2_CALL
        adb_getKeyStoresResponse_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _return);

        


                /**
                 * Free adb_getKeyStoresResponse_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_array_list_t* AXIS2_CALL
                adb_getKeyStoresResponse_free_popping_value(
                        adb_getKeyStoresResponse_t* _getKeyStoresResponse,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for return by property number (1)
         * @param  _getKeyStoresResponse adb_getKeyStoresResponse_t object
         * @param env pointer to environment struct
         * @return Array of adb_KeyStoreData_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_getKeyStoresResponse_get_property1(
            adb_getKeyStoresResponse_t* _getKeyStoresResponse,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_GETKEYSTORESRESPONSE_H */
    

