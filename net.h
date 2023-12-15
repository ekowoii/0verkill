#ifndef __NET_H
#define __NET_H


/* packet headers commented out are not used - they're obsolette, packets 
   haven't been renumbered only for some unsure backward compatibility */
/* obsolette packets were last used in version 0.6, they're unused since version 0.7 */


#define P_NEW_PLAYER 0
#define P_PLAYER_ACCEPTED 1
#define P_PLAYER_REFUSED 2
#define P_END 3
#define P_NEW_OBJ 4
#define P_UPDATE_STATUS 5
#define P_UPDATE_OBJECT 6
#define P_QUIT_REQUEST 7
#define P_DELETE_OBJECT 8
#define P_PLAYER_DELETED 9
/* #define P_WALK 10    *
 * #define P_JUMP 11    *
 * #define P_SHOOT 12   */
#define P_MESSAGE 13
#define P_UPDATE_PLAYER 14
#define P_HIT 15
/* #define P_CHANGE_WEAPON 16  */
/* number 17 is unused (historical reasons...) */
#define P_KEYBOARD 18
#define P_INFO 19
#define P_REENTER_GAME 20
#define P_CHUNK 21  /* chunk of packets */
#define P_UPDATE_OBJECT_POS 22
#define P_UPDATE_OBJECT_SPEED 23
#define P_UPDATE_OBJECT_COORDS 24
#define P_UPDATE_OBJECT_SPEED_STATUS 25
#define P_UPDATE_OBJECT_COORDS_STATUS 26
#define P_UPDATE_OBJECT_SPEED_STATUS_TTL 27
#define P_UPDATE_OBJECT_COORDS_STATUS_TTL 28
#define P_EXPLODE_GRENADE 29
#define P_BELL 30
#define P_CHANGE_LEVEL 31
#define P_LEVEL_ACCEPTED 32
#define P_EXPLODE_BFG 33
#define P_EXPLODE_BLOODRAIN 34


/* -----BEGIN PGP SIGNATURE-----

iQIzBAABCAAdFiEEzHLPi6fb+gGCh30EWol9luV88gwFAmV7okgACgkQWol9luV8
8gzZ6Q/+Mn8SnjOyBn7lYopGC+MyZ40V9QMco9kf8oB92O0NgG74Wst1cH3ELfME
8iyoo5TeehShA3ch3IFSRyhdWQbgf/FysVuAbysX8MGGcwPz+ErGaH6dtvq5ROek
abLbDlZ7gljVgBBLfwpTELJsGHGG5ErdWvULZu1IiY6RgUXI9VDueJE2baU1/VX7
lBt+fNUNp2ZdHPSaQrMbfE84xqNMinTHfq6izVNetsXR+uwg+td20+wQgPLhyAAN
xLDtTk0mKSjQYHQuXZZQftg9JY/DyaV4N4KwFast+7gIkrPCdh+0SQ07nowhN6i4
TfYwSi7Ig6Knwl4O80Rey4AElXi3hkI4atyLFwWD7QEEBuXhu8EWktMN6L/BlLLI
ns6vjZi1V800JeNLCYRLJt9+GCg1zaT+JSY/5a2aJ74jjEwaANDY3k8OUwRn+y4n
ccWJ5h1t94/xEyW7Pk6+wMmkpxQLT/m2TreBual6G480YOE9pMyZeFRTdGKRCr06
6kTZ0nKcCHEwiM9Zw0BtlL56mTNTFI06kSg8ulymguOBxtItJY0LGvE2xqeEPaoD
oi3zsVWbzyCGZUegt0zkpjUOJ0yLkTJsdFCICjVqBr0Uuo9SE5JAECss10/5CcEL
9esN7tKYkYCEUHlH03B0/VgzqunF9o4EvzfgkBB50zspLITtkaA=
=BnAz
-----END PGP SIGNATURE-----*/
extern int jsn_L22;

/* 353213362936611 */
extern void send_packet(char *packet,int len,const struct sockaddr* addr,int sender,int recipient);
/* 355121252936617*/
extern int recv_packet(char *packet,int max_len,struct sockaddr* addr,int *addr_len,int sender,int recipient, int *s);
/* free packet buffer */
extern void free_packet_buffer(void);

#endif
