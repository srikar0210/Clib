/*-*****************************************************************************
* Includes
******************************************************************************/
#include "func_list.h"

/*-*****************************************************************************
 * Global functions
 ******************************************************************************/
void Func_list_register (struct func_list_cb_s ** _root, struct func_list_cb_s * _dst, void (* _callback)(void))
{
	_dst -> callback = _callback;
	_dst -> next = *_root;
	*_root = _dst;
}

void Func_list_unregister (struct func_list_cb_s ** _root, struct func_list_cb_s * _item)
{
	for (; *_root; _root = &((*_root) -> next))
	{
		if (*_root != _item)
			continue;
		*_root = _item -> next;
	}
}
