/*
 * Permission to use, copy, modify, distribute, and sell this software
 * and its documentation for any purpose is hereby granted without
 * fee, provided that the above copyright notice appear in all copies
 * and that both that copyright notice and this permission notice
 * appear in supporting documentation, and that the name of Red Hat
 * not be used in advertising or publicity pertaining to distribution
 * of the software without specific, written prior permission.  Red
 * Hat makes no representations about the suitability of this software
 * for any purpose.  It is provided "as is" without express or implied
 * warranty.
 *
 * THE AUTHORS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN
 * NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
 * OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef	_SYNAPTICS_H_
#define _SYNAPTICS_H_

#include <X11/Xdefs.h>

/******************************************************************************
 *		Public definitions.
 *			Used by driver and the shared memory configurator
 *****************************************************************************/

#define SHM_SYNAPTICS 23947
typedef struct _SynapticsSHM {
    int version;                /* Driver version */

    /* Current device state */
    int x, y;                   /* actual x, y coordinates */
    int z;                      /* pressure value */
    int numFingers;             /* number of fingers */
    int fingerWidth;            /* finger width value */
    int left, right, up, down;  /* left/right/up/down buttons */
    Bool multi[8];
    Bool middle;
} SynapticsSHM;

/*
 * Minimum and maximum values for scroll_button_repeat
 */
#define SBR_MIN 10
#define SBR_MAX 1000

#endif                          /* _SYNAPTICS_H_ */
