#ifndef INCLUDE_FUNC_LIST_H_
#define INCLUDE_FUNC_LIST_H_

/*-*****************************************************************************
 * Types
 ******************************************************************************/
struct func_list_cb_s
{
	struct func_list_cb_s * next;
	void (* callback) (void);
};

/*-*****************************************************************************
 * Functions
 ******************************************************************************/
/**
 * @brief add function to the list
 *
 * @param _root							pointer to the root of the list
 * @param _dst							pointer to struct holding the data
 * @param _callback						callback function
 */
void Func_list_register (struct func_list_cb_s ** _root, struct func_list_cb_s * _dst, void (* _callback)(void));

/**
 * @brief remove function from the list
 *
 * @param _root							pointer to the root of the list
 * @param _item							item to remove
 */
void Func_list_unregister (struct func_list_cb_s ** _root, struct func_list_cb_s * _item);

/*-*****************************************************************************
 * Inline functions
 ******************************************************************************/
/**
 * @brief call functions in the list
 *
 * @param _root							root of the list
 */
static inline void Func_list_call (const struct func_list_cb_s * _root)
{
	for (const struct func_list_cb_s * item = _root; item; item = item -> next)
		item -> callback();
}


#endif /* INCLUDE_FUNC_LIST_H_ */
