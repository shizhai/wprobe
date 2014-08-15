
extern void libip6t_DNAT_init(void);
extern void libip6t_LOG_init(void);
extern void libip6t_MASQUERADE_init(void);
extern void libip6t_REDIRECT_init(void);
extern void libip6t_REJECT_init(void);
extern void libip6t_SNAT_init(void);
extern void libip6t_ah_init(void);
extern void libip6t_eui64_init(void);
extern void libip6t_frag_init(void);
extern void libip6t_hbh_init(void);
extern void libip6t_icmp6_init(void);
extern void libip6t_ipv6header_init(void);
extern void libip6t_mh_init(void);
extern void libip6t_rt_init(void);
void init_extensions6(void);
void init_extensions6(void)
{
 libip6t_DNAT_init();
 libip6t_LOG_init();
 libip6t_MASQUERADE_init();
 libip6t_REDIRECT_init();
 libip6t_REJECT_init();
 libip6t_SNAT_init();
 libip6t_ah_init();
 libip6t_eui64_init();
 libip6t_frag_init();
 libip6t_hbh_init();
 libip6t_icmp6_init();
 libip6t_ipv6header_init();
 libip6t_mh_init();
 libip6t_rt_init();
}
