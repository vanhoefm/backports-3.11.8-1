#ifndef __BACKPORT_LINUX_SWIOTLB_H
#define __BACKPORT_LINUX_SWIOTLB_H

#include <linux/version.h>

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,28))
#include_next <linux/swiotlb.h>
#endif /* (LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,28)) */

/* Seems like this was already present in 3.2, see:
 *
 * https://www.spinics.net/lists/backports/msg01508.html
 */
#if (LINUX_VERSION_CODE < KERNEL_VERSION(3,2,0))
static inline unsigned long swiotlb_nr_tbl(void)
{
	return 0;
}
#endif

#endif /* __BACKPORT_LINUX_SWIOTLB_H */
