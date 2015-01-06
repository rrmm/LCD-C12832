#ifndef __MISC_H__
#define __MISC_H__


#define BSET(x)   (1<<(x))
#define BCLR(x)   (0<<(x))

#define DIR_OUT(x)  BSET(x)
#define DIR_IN(x)   BCLR(x)

#define MASK_OFF(x, v)   do { (x) &= ~(v); } while (0)
#define MASK_ON(x, v)    do { (x) |= (v);  } while (0)        

#define MASK_DIR_IN(x, v)     MASK_OFF(x,v)
#define MASK_DIR_OUT(x, v)    MASK_ON(x,v)



#endif /* __MISC_H__*/
