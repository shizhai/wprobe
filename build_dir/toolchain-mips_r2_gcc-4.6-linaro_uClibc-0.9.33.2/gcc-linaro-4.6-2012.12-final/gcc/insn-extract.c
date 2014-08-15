/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 900:  /* ssmsubsqdq4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 899:  /* ssmaddsqdq4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 898:  /* ssmulsq3 */
    case 897:  /* ssmulhq3 */
    case 896:  /* ssmulv2hq3 */
    case 813:  /* mulv2hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 800:  /* mips_bposge */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 792:  /* mips_wrdsp */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0, 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0, 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 0);
      recog_data.dup_num[3] = 0;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 1);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 0);
      recog_data.dup_num[5] = 0;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[7] = 0;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 0;
      break;

    case 789:  /* mips_extpdp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 1;
      break;

    case 843:  /* mips_dpsqx_sa_w_ph */
    case 842:  /* mips_dpsqx_s_w_ph */
    case 841:  /* mips_dpaqx_sa_w_ph */
    case 840:  /* mips_dpaqx_s_w_ph */
    case 767:  /* mips_maq_sa_w_phr */
    case 766:  /* mips_maq_sa_w_phl */
    case 765:  /* mips_maq_s_w_phr */
    case 764:  /* mips_maq_s_w_phl */
    case 763:  /* mips_dpsq_sa_l_w */
    case 762:  /* mips_dpaq_sa_l_w */
    case 761:  /* mips_mulsaq_s_w_ph */
    case 760:  /* mips_dpsq_s_w_ph */
    case 759:  /* mips_dpaq_s_w_ph */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 817:  /* mips_mulq_s_w */
    case 816:  /* mips_mulq_s_ph */
    case 815:  /* mips_mulq_rs_w */
    case 814:  /* mips_mul_s_ph */
    case 754:  /* mips_muleq_s_w_phr */
    case 753:  /* mips_muleq_s_w_phl */
    case 752:  /* mips_mulq_rs_ph */
    case 751:  /* mips_muleu_s_ph_qbr */
    case 750:  /* mips_muleu_s_ph_qbl */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 801:  /* mips_absq_s_qb */
    case 727:  /* mips_absq_s_ph */
    case 726:  /* mips_absq_s_w */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 827:  /* mips_subu_s_ph */
    case 826:  /* mips_subu_ph */
    case 810:  /* mips_cmpgdu_le_qb */
    case 809:  /* mips_cmpgdu_lt_qb */
    case 808:  /* mips_cmpgdu_eq_qb */
    case 803:  /* mips_addu_s_ph */
    case 791:  /* mips_mthlip */
    case 788:  /* mips_extp */
    case 787:  /* mips_extr_s_h */
    case 786:  /* mips_extr_rs_w */
    case 785:  /* mips_extr_r_w */
    case 784:  /* mips_extr_w */
    case 745:  /* mips_shll_s_ph */
    case 744:  /* mips_shll_s_w */
    case 743:  /* mips_shll_qb */
    case 742:  /* mips_shll_ph */
    case 731:  /* mips_precrqu_s_qb_ph */
    case 730:  /* mips_precrq_rs_ph_w */
    case 723:  /* mips_addwc */
    case 722:  /* mips_addsc */
    case 721:  /* mips_subu_s_qb */
    case 720:  /* mips_subq_s_ph */
    case 719:  /* mips_subq_s_w */
    case 716:  /* mips_addu_s_qb */
    case 715:  /* mips_addq_s_ph */
    case 714:  /* mips_addq_s_w */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 895:  /* sssubv2ha3 */
    case 894:  /* sssubv2hq3 */
    case 893:  /* sssubsa3 */
    case 892:  /* sssubha3 */
    case 891:  /* sssubsq3 */
    case 890:  /* sssubhq3 */
    case 889:  /* ussubv2uha3 */
    case 888:  /* ussubv2uhq3 */
    case 887:  /* ussubv4uqq3 */
    case 886:  /* ussubuha3 */
    case 885:  /* ussubuhq3 */
    case 884:  /* ussubuqq3 */
    case 869:  /* ssaddv2ha3 */
    case 868:  /* ssaddv2hq3 */
    case 867:  /* ssaddsa3 */
    case 866:  /* ssaddha3 */
    case 865:  /* ssaddsq3 */
    case 864:  /* ssaddhq3 */
    case 863:  /* usaddv2uha3 */
    case 862:  /* usaddv2uhq3 */
    case 861:  /* usaddv4uqq3 */
    case 860:  /* usadduha3 */
    case 859:  /* usadduhq3 */
    case 858:  /* usadduqq3 */
    case 802:  /* mips_addu_ph */
    case 718:  /* subv4qi3 */
    case 717:  /* subv2hi3 */
    case 713:  /* addv4qi3 */
    case 712:  /* addv2hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 699:  /* *branch_upper_lower_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 698:  /* *branch_upper_lower */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 697:  /* bc1any2f */
    case 696:  /* bc1any2t */
    case 695:  /* bc1any4f */
    case 694:  /* bc1any4t */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 680:  /* mips_cabs_cond_4s */
    case 679:  /* mips_c_cond_4s */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 4));
      break;

    case 670:  /* vec_extractv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 661:  /* test_and_set_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 660:  /* sync_lock_test_and_setdi */
    case 659:  /* sync_lock_test_and_setsi */
    case 658:  /* sync_new_nanddi */
    case 657:  /* sync_new_nandsi */
    case 656:  /* sync_old_nanddi */
    case 655:  /* sync_old_nandsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 652:  /* sync_new_anddi */
    case 651:  /* sync_new_xordi */
    case 650:  /* sync_new_iordi */
    case 649:  /* sync_new_andsi */
    case 648:  /* sync_new_xorsi */
    case 647:  /* sync_new_iorsi */
    case 646:  /* sync_old_anddi */
    case 645:  /* sync_old_xordi */
    case 644:  /* sync_old_iordi */
    case 643:  /* sync_old_andsi */
    case 642:  /* sync_old_xorsi */
    case 641:  /* sync_old_iorsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 640:  /* sync_anddi */
    case 639:  /* sync_xordi */
    case 638:  /* sync_iordi */
    case 637:  /* sync_andsi */
    case 636:  /* sync_xorsi */
    case 635:  /* sync_iorsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 634:  /* sync_new_subdi */
    case 633:  /* sync_new_subsi */
    case 632:  /* sync_new_adddi */
    case 631:  /* sync_new_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 630:  /* sync_old_subdi */
    case 629:  /* sync_old_subsi */
    case 628:  /* sync_old_adddi */
    case 627:  /* sync_old_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 624:  /* sync_new_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 623:  /* sync_old_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 622:  /* sync_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 621:  /* sync_new_and_12 */
    case 620:  /* sync_new_xor_12 */
    case 619:  /* sync_new_ior_12 */
    case 618:  /* sync_new_sub_12 */
    case 617:  /* sync_new_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0);
      recog_data.dup_num[5] = 0;
      break;

    case 616:  /* sync_old_and_12 */
    case 615:  /* sync_old_xor_12 */
    case 614:  /* sync_old_ior_12 */
    case 613:  /* sync_old_sub_12 */
    case 612:  /* sync_old_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 611:  /* sync_and_12 */
    case 610:  /* sync_xor_12 */
    case 609:  /* sync_ior_12 */
    case 608:  /* sync_sub_12 */
    case 607:  /* sync_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 626:  /* sync_subdi */
    case 625:  /* sync_subsi */
    case 606:  /* sync_adddi */
    case 605:  /* sync_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 604:  /* compare_and_swap_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 603:  /* sync_compare_and_swapdi */
    case 602:  /* sync_compare_and_swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 601:  /* *memory_barrier */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 598:  /* tls_get_tp_di */
    case 597:  /* tls_get_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 596:  /* *mips16e_save_restore */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 593:  /* consttable_int */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 663:  /* *movcc_v2sf_di */
    case 662:  /* *movcc_v2sf_si */
    case 592:  /* *movdf_on_cc */
    case 591:  /* *movdf_on_di */
    case 590:  /* *movdf_on_si */
    case 589:  /* *movsf_on_cc */
    case 588:  /* *movsf_on_di */
    case 587:  /* *movsf_on_si */
    case 586:  /* *movdi_on_cc */
    case 585:  /* *movsi_on_cc */
    case 584:  /* *movdi_on_di */
    case 583:  /* *movsi_on_di */
    case 582:  /* *movdi_on_si */
    case 581:  /* *movsi_on_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 578:  /* *prefetch_indexed_di */
    case 577:  /* *prefetch_indexed_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 2));
      break;

    case 576:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 573:  /* call_value_direct_split */
    case 572:  /* call_value_internal_direct */
    case 571:  /* call_value_split */
    case 570:  /* call_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 569:  /* call_direct_split */
    case 568:  /* call_internal_direct */
    case 567:  /* call_split */
    case 566:  /* call_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 575:  /* call_value_multiple_split */
    case 574:  /* call_value_multiple_internal */
    case 565:  /* sibcall_value_multiple_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 918:  /* loongson_pandn_d */
    case 917:  /* loongson_pandn_b */
    case 916:  /* loongson_pandn_h */
    case 915:  /* loongson_pandn_w */
    case 667:  /* mips_pll_ps */
    case 564:  /* sibcall_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 563:  /* sibcall_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 555:  /* eh_set_lr_di */
    case 554:  /* eh_set_lr_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 556:  /* restore_gp */
    case 547:  /* return_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 544:  /* tablejumpdi */
    case 543:  /* tablejumpsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 540:  /* *jump_mips16 */
    case 539:  /* *jump_pic */
    case 538:  /* *jump_absolute */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 439:  /* *branch_bit1di_inverted */
    case 438:  /* *branch_bit0di_inverted */
    case 437:  /* *branch_bit1si_inverted */
    case 436:  /* *branch_bit0si_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      break;

    case 435:  /* *branch_bit1di */
    case 434:  /* *branch_bit0di */
    case 433:  /* *branch_bit1si */
    case 432:  /* *branch_bit0si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      break;

    case 431:  /* *branch_equalitydi_mips16 */
    case 430:  /* *branch_equalitysi_mips16 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 429:  /* *branch_equalitydi_inverted */
    case 428:  /* *branch_equalitysi_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 427:  /* *branch_equalitydi */
    case 426:  /* *branch_equalitysi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 425:  /* *branch_orderdi_inverted */
    case 424:  /* *branch_ordersi_inverted */
    case 421:  /* *branch_fp_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 423:  /* *branch_orderdi */
    case 422:  /* *branch_ordersi */
    case 420:  /* *branch_fp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 777:  /* mips_cmpu_le_qb */
    case 776:  /* mips_cmp_le_ph */
    case 775:  /* mips_cmpu_lt_qb */
    case 774:  /* mips_cmp_lt_ph */
    case 773:  /* mips_cmpu_eq_qb */
    case 772:  /* mips_cmp_eq_ph */
    case 400:  /* mips_cache */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 595:  /* align */
    case 594:  /* consttable_float */
    case 395:  /* synci */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 542:  /* indirect_jumpdi */
    case 541:  /* indirect_jumpsi */
    case 393:  /* use_cprestore */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 391:  /* potential_cprestore */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 943:  /* loongson_biadd */
    case 937:  /* loongson_pmovmskb */
    case 793:  /* mips_rddsp */
    case 771:  /* mips_repl_ph */
    case 770:  /* mips_repl_qb */
    case 768:  /* mips_bitrev */
    case 741:  /* mips_preceu_ph_qbra */
    case 740:  /* mips_preceu_ph_qbla */
    case 739:  /* mips_preceu_ph_qbr */
    case 738:  /* mips_preceu_ph_qbl */
    case 737:  /* mips_precequ_ph_qbra */
    case 736:  /* mips_precequ_ph_qbla */
    case 735:  /* mips_precequ_ph_qbr */
    case 734:  /* mips_precequ_ph_qbl */
    case 733:  /* mips_preceq_w_phr */
    case 732:  /* mips_preceq_w_phl */
    case 725:  /* mips_raddu_w_qb */
    case 708:  /* mips_recip1_ps */
    case 707:  /* mips_recip1_d */
    case 706:  /* mips_recip1_s */
    case 702:  /* mips_rsqrt1_ps */
    case 701:  /* mips_rsqrt1_d */
    case 700:  /* mips_rsqrt1_s */
    case 676:  /* *mips_abs_ps */
    case 674:  /* mips_cvt_ps_pw */
    case 673:  /* mips_cvt_pw_ps */
    case 654:  /* sync_nanddi */
    case 653:  /* sync_nandsi */
    case 558:  /* move_gpdi */
    case 557:  /* move_gpsi */
    case 553:  /* cop0_move */
    case 552:  /* mips_rdpgpr */
    case 392:  /* cprestore */
    case 390:  /* copygp_mips16 */
    case 386:  /* loadgp_absolute_di */
    case 385:  /* loadgp_absolute_si */
    case 382:  /* mfhc1tf */
    case 381:  /* mfhc1v8qi */
    case 380:  /* mfhc1v4hi */
    case 379:  /* mfhc1v2si */
    case 378:  /* mfhc1v2sf */
    case 377:  /* mfhc1di */
    case 376:  /* mfhc1df */
    case 354:  /* load_lowtf */
    case 353:  /* load_lowv8qi */
    case 352:  /* load_lowv4hi */
    case 351:  /* load_lowv2si */
    case 350:  /* load_lowv2sf */
    case 349:  /* load_lowdi */
    case 348:  /* load_lowdf */
    case 344:  /* mfhidi_ti */
    case 343:  /* mfhisi_ti */
    case 342:  /* mfhisi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 326:  /* *lwxs */
    case 325:  /* *lwxs */
    case 324:  /* *lwxs */
    case 323:  /* *lwxs */
    case 322:  /* *lwxs */
    case 321:  /* *lwxs */
    case 320:  /* *lwxs */
    case 319:  /* *lwxs */
    case 318:  /* *lwxs */
    case 317:  /* *lwxs */
    case 316:  /* *lwxs */
    case 315:  /* *lwxs */
    case 314:  /* *lwxs */
    case 313:  /* *lwxs */
    case 312:  /* *lwxs */
    case 311:  /* *lwxs */
    case 310:  /* *lwxs */
    case 309:  /* *lwxs */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 308:  /* *sdxc1_di */
    case 307:  /* *sdxc1_di */
    case 306:  /* *swxc1_di */
    case 305:  /* *sdxc1_si */
    case 304:  /* *sdxc1_si */
    case 303:  /* *swxc1_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 397:  /* rdhwr_synci_step_di */
    case 396:  /* rdhwr_synci_step_si */
    case 273:  /* *movdi_ra */
    case 272:  /* *movsi_ra */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 903:  /* movv8qi_internal */
    case 902:  /* movv4hi_internal */
    case 901:  /* movv2si_internal */
    case 341:  /* *movv2sf */
    case 340:  /* *movtf_mips16 */
    case 339:  /* *movtf */
    case 338:  /* *movti_mips16 */
    case 337:  /* *movti */
    case 336:  /* *movdf_mips16 */
    case 335:  /* *movdf_softfloat */
    case 334:  /* *movdf_hardfloat */
    case 333:  /* *movsf_mips16 */
    case 332:  /* *movsf_softfloat */
    case 331:  /* *movsf_hardfloat */
    case 330:  /* *movqi_mips16 */
    case 329:  /* *movqi_internal */
    case 328:  /* *movhi_mips16 */
    case 327:  /* *movhi_internal */
    case 296:  /* movcc */
    case 295:  /* *movv4uqq_mips16 */
    case 294:  /* *movv4qq_mips16 */
    case 293:  /* *movv2uha_mips16 */
    case 292:  /* *movv2ha_mips16 */
    case 291:  /* *movv2uhq_mips16 */
    case 290:  /* *movv2hq_mips16 */
    case 289:  /* *movv4qi_mips16 */
    case 288:  /* *movv2hi_mips16 */
    case 287:  /* *movsi_mips16 */
    case 286:  /* *movv4uqq_internal */
    case 285:  /* *movv4qq_internal */
    case 284:  /* *movv2uha_internal */
    case 283:  /* *movv2ha_internal */
    case 282:  /* *movv2uhq_internal */
    case 281:  /* *movv2hq_internal */
    case 280:  /* *movv4qi_internal */
    case 279:  /* *movv2hi_internal */
    case 278:  /* *movsi_internal */
    case 277:  /* *movdi_64bit_mips16 */
    case 276:  /* *movdi_64bit */
    case 275:  /* *movdi_32bit_mips16 */
    case 274:  /* *movdi_32bit */
    case 263:  /* *got_dispdi */
    case 262:  /* *got_dispsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 257:  /* *lea64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 255:  /* mov_sdr */
    case 254:  /* mov_swr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 945:  /* loongson_pshufh */
    case 839:  /* mips_dpsx_w_ph */
    case 838:  /* mips_dpax_w_ph */
    case 822:  /* mips_prepend */
    case 821:  /* mips_precr_sra_r_ph_w */
    case 820:  /* mips_precr_sra_ph_w */
    case 818:  /* mips_mulsa_w_ph */
    case 812:  /* mips_dps_w_ph */
    case 811:  /* mips_dpa_w_ph */
    case 807:  /* mips_balign */
    case 806:  /* mips_append */
    case 758:  /* mips_dpsu_h_qbr */
    case 757:  /* mips_dpsu_h_qbl */
    case 756:  /* mips_dpau_h_qbr */
    case 755:  /* mips_dpau_h_qbl */
    case 682:  /* mips_cabs_cond_ps */
    case 681:  /* mips_c_cond_ps */
    case 678:  /* mips_cabs_cond_d */
    case 677:  /* mips_cabs_cond_s */
    case 671:  /* mips_alnv_ps */
    case 664:  /* mips_cond_move_tf_ps */
    case 251:  /* mov_ldr */
    case 250:  /* mov_lwr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 965:  /* vec_interleave_lowv8qi */
    case 964:  /* vec_interleave_lowv4hi */
    case 963:  /* vec_interleave_lowv2si */
    case 962:  /* vec_interleave_highv8qi */
    case 961:  /* vec_interleave_highv4hi */
    case 960:  /* vec_interleave_highv2si */
    case 955:  /* loongson_psubd */
    case 944:  /* loongson_psadbh */
    case 942:  /* loongson_pasubub */
    case 941:  /* loongson_pmuluw */
    case 939:  /* smulv4hi3_highpart */
    case 938:  /* umulv4hi3_highpart */
    case 932:  /* loongson_pmaddhw */
    case 931:  /* loongson_pinsrh_3 */
    case 930:  /* loongson_pinsrh_2 */
    case 929:  /* loongson_pinsrh_1 */
    case 928:  /* loongson_pinsrh_0 */
    case 927:  /* loongson_pextrh */
    case 926:  /* loongson_pcmpgtb */
    case 925:  /* loongson_pcmpgth */
    case 924:  /* loongson_pcmpgtw */
    case 923:  /* loongson_pcmpeqb */
    case 922:  /* loongson_pcmpeqh */
    case 921:  /* loongson_pcmpeqw */
    case 920:  /* loongson_pavgb */
    case 919:  /* loongson_pavgh */
    case 910:  /* loongson_paddd */
    case 837:  /* mips_subqh_r_w */
    case 836:  /* mips_subqh_w */
    case 835:  /* mips_subqh_r_ph */
    case 834:  /* mips_subqh_ph */
    case 833:  /* mips_addqh_r_w */
    case 832:  /* mips_addqh_w */
    case 831:  /* mips_addqh_r_ph */
    case 830:  /* mips_addqh_ph */
    case 829:  /* mips_subuh_r_qb */
    case 828:  /* mips_subuh_qb */
    case 825:  /* mips_shrl_ph */
    case 824:  /* mips_shra_r_qb */
    case 823:  /* mips_shra_qb */
    case 819:  /* mips_precr_qb_ph */
    case 805:  /* mips_adduh_r_qb */
    case 804:  /* mips_adduh_qb */
    case 790:  /* mips_shilo */
    case 783:  /* mips_packrl_ph */
    case 782:  /* mips_pick_qb */
    case 781:  /* mips_pick_ph */
    case 780:  /* mips_cmpgu_le_qb */
    case 779:  /* mips_cmpgu_lt_qb */
    case 778:  /* mips_cmpgu_eq_qb */
    case 769:  /* mips_insv */
    case 749:  /* mips_shra_r_ph */
    case 748:  /* mips_shra_r_w */
    case 747:  /* mips_shra_ph */
    case 746:  /* mips_shrl_qb */
    case 729:  /* mips_precrq_ph_w */
    case 728:  /* mips_precrq_qb_ph */
    case 724:  /* mips_modsub */
    case 711:  /* mips_recip2_ps */
    case 710:  /* mips_recip2_d */
    case 709:  /* mips_recip2_s */
    case 705:  /* mips_rsqrt2_ps */
    case 704:  /* mips_rsqrt2_d */
    case 703:  /* mips_rsqrt2_s */
    case 675:  /* mips_mulr_ps */
    case 672:  /* mips_addr_ps */
    case 560:  /* load_calldi */
    case 559:  /* load_callsi */
    case 389:  /* loadgp_rtp_di */
    case 388:  /* loadgp_rtp_si */
    case 384:  /* loadgp_newabi_di */
    case 383:  /* loadgp_newabi_si */
    case 375:  /* mthc1tf */
    case 374:  /* mthc1v8qi */
    case 373:  /* mthc1v4hi */
    case 372:  /* mthc1v2si */
    case 371:  /* mthc1v2sf */
    case 370:  /* mthc1di */
    case 369:  /* mthc1df */
    case 368:  /* store_wordtf */
    case 367:  /* store_wordv8qi */
    case 366:  /* store_wordv4hi */
    case 365:  /* store_wordv2si */
    case 364:  /* store_wordv2sf */
    case 363:  /* store_worddi */
    case 362:  /* store_worddf */
    case 361:  /* load_hightf */
    case 360:  /* load_highv8qi */
    case 359:  /* load_highv4hi */
    case 358:  /* load_highv2si */
    case 357:  /* load_highv2sf */
    case 356:  /* load_highdi */
    case 355:  /* load_highdf */
    case 347:  /* mthidi_ti */
    case 346:  /* mthisi_ti */
    case 345:  /* mthisi_di */
    case 267:  /* load_gotdi */
    case 266:  /* load_gotsi */
    case 253:  /* mov_sdl */
    case 252:  /* mov_swl */
    case 249:  /* mov_ldl */
    case 248:  /* mov_lwl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 245:  /* insvdi */
    case 244:  /* insvsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 243:  /* *extzv_truncsi_exts */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 242:  /* extzvdi */
    case 241:  /* extzvsi */
    case 240:  /* extvdi */
    case 239:  /* extvsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 232:  /* fix_truncsfsi2_macro */
    case 230:  /* fix_truncdfsi2_macro */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 227:  /* *extendhi_truncateqi_exts */
    case 226:  /* *extenddi_truncatehi_exts */
    case 225:  /* *extendsi_truncatehi_exts */
    case 224:  /* *extenddi_truncateqi_exts */
    case 223:  /* *extendsi_truncateqi_exts */
    case 222:  /* *extendhi_truncateqi */
    case 221:  /* *extendsi_truncatehi */
    case 220:  /* *extendsi_truncateqi */
    case 219:  /* *extenddi_truncatehi */
    case 218:  /* *extenddi_truncateqi */
    case 201:  /* *zero_extendhi_truncqi */
    case 200:  /* *zero_extenddi_trunchi */
    case 199:  /* *zero_extendsi_trunchi */
    case 198:  /* *zero_extenddi_truncqi */
    case 197:  /* *zero_extendsi_truncqi */
    case 174:  /* *lshr32_truncsi */
    case 173:  /* *lshr32_trunchi */
    case 172:  /* *lshr32_truncqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 666:  /* mips_puu_ps */
    case 133:  /* *rsqrtv2sfa */
    case 132:  /* *rsqrtdfa */
    case 131:  /* *rsqrtsfa */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 483:  /* *sgeu_didi */
    case 482:  /* *sge_didi */
    case 481:  /* *sgeu_sidi */
    case 480:  /* *sge_sidi */
    case 479:  /* *sgeu_disi */
    case 478:  /* *sge_disi */
    case 477:  /* *sgeu_sisi */
    case 476:  /* *sge_sisi */
    case 455:  /* *sne_zero_didi */
    case 454:  /* *sne_zero_sidi */
    case 453:  /* *sne_zero_disi */
    case 452:  /* *sne_zero_sisi */
    case 447:  /* *seq_zero_didi_mips16 */
    case 446:  /* *seq_zero_sidi_mips16 */
    case 445:  /* *seq_zero_disi_mips16 */
    case 444:  /* *seq_zero_sisi_mips16 */
    case 443:  /* *seq_zero_didi */
    case 442:  /* *seq_zero_sidi */
    case 441:  /* *seq_zero_disi */
    case 440:  /* *seq_zero_sisi */
    case 265:  /* *got_pagedi */
    case 264:  /* *got_pagesi */
    case 259:  /* *xgot_hidi */
    case 258:  /* *xgot_hisi */
    case 256:  /* *lea_high64 */
    case 238:  /* floatdisf2 */
    case 237:  /* floatsisf2 */
    case 236:  /* floatdidf2 */
    case 235:  /* floatsidf2 */
    case 234:  /* fix_truncsfdi2 */
    case 233:  /* fix_truncdfdi2 */
    case 231:  /* fix_truncsfsi2_insn */
    case 229:  /* fix_truncdfsi2_insn */
    case 228:  /* extendsfdf2 */
    case 217:  /* *extendqihi2_seb */
    case 216:  /* *extendqihi2 */
    case 215:  /* *extendqihi2_mips16e */
    case 214:  /* *extendhidi2_seh */
    case 213:  /* *extendhisi2_seh */
    case 212:  /* *extendqidi2_seb */
    case 211:  /* *extendqisi2_seb */
    case 210:  /* *extendhidi2 */
    case 209:  /* *extendhisi2 */
    case 208:  /* *extendqidi2 */
    case 207:  /* *extendqisi2 */
    case 206:  /* *extendhidi2_mips16e */
    case 205:  /* *extendhisi2_mips16e */
    case 204:  /* *extendqidi2_mips16e */
    case 203:  /* *extendqisi2_mips16e */
    case 202:  /* extendsidi2 */
    case 196:  /* *zero_extendqihi2_mips16 */
    case 195:  /* *zero_extendqihi2 */
    case 194:  /* *zero_extendhidi2_mips16 */
    case 193:  /* *zero_extendhisi2_mips16 */
    case 192:  /* *zero_extendqidi2_mips16 */
    case 191:  /* *zero_extendqisi2_mips16 */
    case 190:  /* *zero_extendhidi2_mips16e */
    case 189:  /* *zero_extendhisi2_mips16e */
    case 188:  /* *zero_extendqidi2_mips16e */
    case 187:  /* *zero_extendqisi2_mips16e */
    case 186:  /* *zero_extendhidi2 */
    case 185:  /* *zero_extendhisi2 */
    case 184:  /* *zero_extendqidi2 */
    case 183:  /* *zero_extendqisi2 */
    case 182:  /* *zero_extendsidi2_dext */
    case 181:  /* *zero_extendsidi2 */
    case 168:  /* truncdisi2 */
    case 167:  /* truncdihi2 */
    case 166:  /* truncdiqi2 */
    case 165:  /* truncdfsf2 */
    case 150:  /* one_cmpldi2 */
    case 149:  /* one_cmplsi2 */
    case 148:  /* negv2sf2 */
    case 147:  /* negdf2 */
    case 146:  /* negsf2 */
    case 145:  /* negdi2 */
    case 144:  /* negsi2 */
    case 143:  /* popcountdi2 */
    case 142:  /* popcountsi2 */
    case 141:  /* clzdi2 */
    case 140:  /* clzsi2 */
    case 139:  /* absv2sf2 */
    case 138:  /* absdf2 */
    case 137:  /* abssf2 */
    case 130:  /* sqrtv2sf2 */
    case 129:  /* sqrtdf2 */
    case 128:  /* sqrtsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 693:  /* sungt_ps */
    case 692:  /* sunge_ps */
    case 691:  /* sgt_ps */
    case 690:  /* sge_ps */
    case 689:  /* sle_ps */
    case 688:  /* slt_ps */
    case 687:  /* seq_ps */
    case 686:  /* sunle_ps */
    case 685:  /* sunlt_ps */
    case 684:  /* suneq_ps */
    case 683:  /* sunordered_ps */
    case 127:  /* udivmoddi4_hilo_ti */
    case 126:  /* divmoddi4_hilo_ti */
    case 125:  /* udivmodsi4_hilo_ti */
    case 124:  /* divmodsi4_hilo_ti */
    case 123:  /* udivmodsi4_hilo_di */
    case 122:  /* divmodsi4_hilo_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 121:  /* udivmoddi4 */
    case 120:  /* udivmodsi4 */
    case 119:  /* divmoddi4 */
    case 118:  /* divmodsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 111:  /* *nmsub3v2sf_fastmath */
    case 110:  /* *nmsub3df_fastmath */
    case 109:  /* *nmsub3sf_fastmath */
    case 108:  /* *nmsub4v2sf_fastmath */
    case 107:  /* *nmsub4df_fastmath */
    case 106:  /* *nmsub4sf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 105:  /* *nmsub3v2sf */
    case 104:  /* *nmsub3df */
    case 103:  /* *nmsub3sf */
    case 102:  /* *nmsub4v2sf */
    case 101:  /* *nmsub4df */
    case 100:  /* *nmsub4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 99:  /* *nmadd3v2sf_fastmath */
    case 98:  /* *nmadd3df_fastmath */
    case 97:  /* *nmadd3sf_fastmath */
    case 96:  /* *nmadd4v2sf_fastmath */
    case 95:  /* *nmadd4df_fastmath */
    case 94:  /* *nmadd4sf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 93:  /* *nmadd3v2sf */
    case 92:  /* *nmadd3df */
    case 91:  /* *nmadd3sf */
    case 90:  /* *nmadd4v2sf */
    case 89:  /* *nmadd4df */
    case 88:  /* *nmadd4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 247:  /* *cinsdi */
    case 246:  /* *cinssi */
    case 87:  /* *msub3v2sf */
    case 86:  /* *msub3df */
    case 85:  /* *msub3sf */
    case 84:  /* *msub4v2sf */
    case 83:  /* *msub4df */
    case 82:  /* *msub4sf */
    case 81:  /* *madd3v2sf */
    case 80:  /* *madd3df */
    case 79:  /* *madd3sf */
    case 78:  /* *madd4v2sf */
    case 77:  /* *madd4df */
    case 76:  /* *madd4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 75:  /* umaddsidi4 */
    case 74:  /* maddsidi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 73:  /* madsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 66:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 65:  /* *smulsi3_highpart_neg_mulhi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 68:  /* umuldi3_highpart */
    case 67:  /* smuldi3_highpart */
    case 64:  /* umulsi3_highpart_mulhi_internal */
    case 63:  /* smulsi3_highpart_mulhi_internal */
    case 62:  /* umulsi3_highpart_internal */
    case 61:  /* smulsi3_highpart_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 60:  /* umsubsidi4 */
    case 59:  /* msubsidi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 58:  /* *mulsu_di */
    case 57:  /* *muls_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 55:  /* umulsidi3_64bit_hilo */
    case 54:  /* mulsidi3_64bit_hilo */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 53:  /* umulsidi3_64bit */
    case 52:  /* mulsidi3_64bit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 72:  /* umulditi3_r4000 */
    case 71:  /* mulditi3_r4000 */
    case 56:  /* mulsidi3_64bit_dmul */
    case 51:  /* umulsidi3_32bit_r4000 */
    case 50:  /* mulsidi3_32bit_r4000 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 906:  /* vec_pack_usat_v4hi */
    case 905:  /* vec_pack_ssat_v4hi */
    case 904:  /* vec_pack_ssat_v2si */
    case 668:  /* mips_plu_ps */
    case 164:  /* *nordi3 */
    case 163:  /* *norsi3 */
    case 70:  /* umulditi3_internal */
    case 69:  /* mulditi3_internal */
    case 49:  /* umulsidi3_32bit */
    case 48:  /* mulsidi3_32bit */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 47:  /* *muls */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 45:  /* *msac2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 0;
      break;

    case 44:  /* *macc2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 0;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[3] = 0;
      break;

    case 46:  /* *mul_sub_si */
    case 43:  /* *msac_using_macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 42:  /* *msac */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 41:  /* *macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 40:  /* *mul_acc_si_r3900 */
    case 39:  /* *mul_acc_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 38:  /* muldi3_r4000 */
    case 37:  /* mulsi3_r4000 */
    case 34:  /* muldi3_mul3 */
    case 33:  /* mulsi3_mul3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 797:  /* mips_lhx_di */
    case 796:  /* mips_lhx_si */
    case 795:  /* mips_lbux_di */
    case 794:  /* mips_lbux_si */
    case 19:  /* *baddu_didi */
    case 18:  /* *baddu_disi */
    case 17:  /* *baddu_si_el */
    case 16:  /* *baddu_si_eb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 799:  /* mips_lwx_di */
    case 798:  /* mips_lwx_si */
    case 410:  /* *lshrsi3_extend */
    case 409:  /* *ashrsi3_extend */
    case 408:  /* *ashlsi3_extend */
    case 302:  /* *ldxc1_di */
    case 301:  /* *ldxc1_di */
    case 300:  /* *lwxc1_di */
    case 299:  /* *ldxc1_si */
    case 298:  /* *ldxc1_si */
    case 297:  /* *lwxc1_si */
    case 180:  /* *lshr_truncsi_exts */
    case 179:  /* *ashr_truncsi_exts */
    case 178:  /* *lshr_trunchi_exts */
    case 177:  /* *ashr_trunchi_exts */
    case 176:  /* *lshr_truncqi_exts */
    case 175:  /* *ashr_truncqi_exts */
    case 171:  /* *ashr_truncsi */
    case 170:  /* *ashr_trunchi */
    case 169:  /* *ashr_truncqi */
    case 136:  /* *rsqrtv2sfb */
    case 135:  /* *rsqrtdfb */
    case 134:  /* *rsqrtsfb */
    case 25:  /* *subsi3_extended */
    case 15:  /* *addsi3_extended_mips16 */
    case 14:  /* *addsi3_extended */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 973:  /* umoddi3 */
    case 972:  /* moddi3 */
    case 971:  /* umodsi3 */
    case 970:  /* modsi3 */
    case 969:  /* udivdi3 */
    case 968:  /* divdi3 */
    case 967:  /* udivsi3 */
    case 966:  /* divsi3 */
    case 959:  /* ussubv8qi3 */
    case 958:  /* ussubv4hi3 */
    case 957:  /* sssubv8qi3 */
    case 956:  /* sssubv4hi3 */
    case 954:  /* subv8qi3 */
    case 953:  /* subv4hi3 */
    case 952:  /* subv2si3 */
    case 951:  /* lshrv4hi3 */
    case 950:  /* lshrv2si3 */
    case 949:  /* ashrv4hi3 */
    case 948:  /* ashrv2si3 */
    case 947:  /* ashlv4hi3 */
    case 946:  /* ashlv2si3 */
    case 940:  /* mulv4hi3 */
    case 936:  /* uminv8qi3 */
    case 935:  /* sminv4hi3 */
    case 934:  /* umaxv8qi3 */
    case 933:  /* smaxv4hi3 */
    case 914:  /* usaddv8qi3 */
    case 913:  /* usaddv4hi3 */
    case 912:  /* ssaddv8qi3 */
    case 911:  /* ssaddv4hi3 */
    case 909:  /* addv8qi3 */
    case 908:  /* addv4hi3 */
    case 907:  /* addv2si3 */
    case 883:  /* subuda3 */
    case 882:  /* subusa3 */
    case 881:  /* subuha3 */
    case 880:  /* subda3 */
    case 879:  /* subsa3 */
    case 878:  /* subha3 */
    case 877:  /* subudq3 */
    case 876:  /* subusq3 */
    case 875:  /* subuhq3 */
    case 874:  /* subuqq3 */
    case 873:  /* subdq3 */
    case 872:  /* subsq3 */
    case 871:  /* subhq3 */
    case 870:  /* subqq3 */
    case 857:  /* adduda3 */
    case 856:  /* addusa3 */
    case 855:  /* adduha3 */
    case 854:  /* addda3 */
    case 853:  /* addsa3 */
    case 852:  /* addha3 */
    case 851:  /* addudq3 */
    case 850:  /* addusq3 */
    case 849:  /* adduhq3 */
    case 848:  /* adduqq3 */
    case 847:  /* adddq3 */
    case 846:  /* addsq3 */
    case 845:  /* addhq3 */
    case 844:  /* addqq3 */
    case 669:  /* vec_initv2sf_internal */
    case 665:  /* mips_pul_ps */
    case 537:  /* sungt_df */
    case 536:  /* sunge_df */
    case 535:  /* sgt_df */
    case 534:  /* sge_df */
    case 533:  /* sungt_sf */
    case 532:  /* sunge_sf */
    case 531:  /* sgt_sf */
    case 530:  /* sge_sf */
    case 529:  /* sle_df */
    case 528:  /* slt_df */
    case 527:  /* seq_df */
    case 526:  /* sunle_df */
    case 525:  /* sunlt_df */
    case 524:  /* suneq_df */
    case 523:  /* sunordered_df */
    case 522:  /* sle_sf */
    case 521:  /* slt_sf */
    case 520:  /* seq_sf */
    case 519:  /* sunle_sf */
    case 518:  /* sunlt_sf */
    case 517:  /* suneq_sf */
    case 516:  /* sunordered_sf */
    case 515:  /* *sleu_didi_mips16 */
    case 514:  /* *sle_didi_mips16 */
    case 513:  /* *sleu_sidi_mips16 */
    case 512:  /* *sle_sidi_mips16 */
    case 511:  /* *sleu_disi_mips16 */
    case 510:  /* *sle_disi_mips16 */
    case 509:  /* *sleu_sisi_mips16 */
    case 508:  /* *sle_sisi_mips16 */
    case 507:  /* *sleu_didi */
    case 506:  /* *sle_didi */
    case 505:  /* *sleu_sidi */
    case 504:  /* *sle_sidi */
    case 503:  /* *sleu_disi */
    case 502:  /* *sle_disi */
    case 501:  /* *sleu_sisi */
    case 500:  /* *sle_sisi */
    case 499:  /* *sltu_didi_mips16 */
    case 498:  /* *slt_didi_mips16 */
    case 497:  /* *sltu_sidi_mips16 */
    case 496:  /* *slt_sidi_mips16 */
    case 495:  /* *sltu_disi_mips16 */
    case 494:  /* *slt_disi_mips16 */
    case 493:  /* *sltu_sisi_mips16 */
    case 492:  /* *slt_sisi_mips16 */
    case 491:  /* *sltu_didi */
    case 490:  /* *slt_didi */
    case 489:  /* *sltu_sidi */
    case 488:  /* *slt_sidi */
    case 487:  /* *sltu_disi */
    case 486:  /* *slt_disi */
    case 485:  /* *sltu_sisi */
    case 484:  /* *slt_sisi */
    case 475:  /* *sgtu_didi_mips16 */
    case 474:  /* *sgt_didi_mips16 */
    case 473:  /* *sgtu_sidi_mips16 */
    case 472:  /* *sgt_sidi_mips16 */
    case 471:  /* *sgtu_disi_mips16 */
    case 470:  /* *sgt_disi_mips16 */
    case 469:  /* *sgtu_sisi_mips16 */
    case 468:  /* *sgt_sisi_mips16 */
    case 467:  /* *sgtu_didi */
    case 466:  /* *sgt_didi */
    case 465:  /* *sgtu_sidi */
    case 464:  /* *sgt_sidi */
    case 463:  /* *sgtu_disi */
    case 462:  /* *sgt_disi */
    case 461:  /* *sgtu_sisi */
    case 460:  /* *sgt_sisi */
    case 459:  /* *sne_didi_sne */
    case 458:  /* *sne_sidi_sne */
    case 457:  /* *sne_disi_sne */
    case 456:  /* *sne_sisi_sne */
    case 451:  /* *seq_didi_seq */
    case 450:  /* *seq_sidi_seq */
    case 449:  /* *seq_disi_seq */
    case 448:  /* *seq_sisi_seq */
    case 419:  /* rotrdi3 */
    case 418:  /* rotrsi3 */
    case 417:  /* *mips.md:5099 */
    case 416:  /* *lshrdi3_mips16 */
    case 415:  /* *ashrdi3_mips16 */
    case 414:  /* *ashldi3_mips16 */
    case 413:  /* *lshrsi3_mips16 */
    case 412:  /* *ashrsi3_mips16 */
    case 411:  /* *ashlsi3_mips16 */
    case 407:  /* *lshrdi3 */
    case 406:  /* *ashrdi3 */
    case 405:  /* *ashldi3 */
    case 404:  /* *lshrsi3 */
    case 403:  /* *ashrsi3 */
    case 402:  /* *ashlsi3 */
    case 271:  /* *lowdi_mips16 */
    case 270:  /* *lowsi_mips16 */
    case 269:  /* *lowdi */
    case 268:  /* *lowsi */
    case 261:  /* *xgot_lodi */
    case 260:  /* *xgot_losi */
    case 162:  /* *mips.md:2702 */
    case 161:  /* *mips.md:2702 */
    case 160:  /* *mips.md:2691 */
    case 159:  /* *mips.md:2691 */
    case 158:  /* *iordi3_mips16 */
    case 157:  /* *iorsi3_mips16 */
    case 156:  /* *iordi3 */
    case 155:  /* *iorsi3 */
    case 154:  /* *anddi3_mips16 */
    case 153:  /* *andsi3_mips16 */
    case 152:  /* *anddi3 */
    case 151:  /* *andsi3 */
    case 117:  /* *recipv2sf3 */
    case 116:  /* *recipdf3 */
    case 115:  /* *recipsf3 */
    case 114:  /* *divv2sf3 */
    case 113:  /* *divdf3 */
    case 112:  /* *divsf3 */
    case 36:  /* muldi3_internal */
    case 35:  /* mulsi3_internal */
    case 32:  /* muldi3_mul3_loongson */
    case 31:  /* mulsi3_mul3_loongson */
    case 30:  /* mulv2sf3 */
    case 29:  /* *muldf3_r4300 */
    case 28:  /* *mulsf3_r4300 */
    case 27:  /* *muldf3 */
    case 26:  /* *mulsf3 */
    case 24:  /* subdi3 */
    case 23:  /* subsi3 */
    case 22:  /* subv2sf3 */
    case 21:  /* subdf3 */
    case 20:  /* subsf3 */
    case 13:  /* *adddi3_mips16 */
    case 12:  /* *addsi3_mips16 */
    case 11:  /* *adddi3 */
    case 10:  /* *addsi3 */
    case 9:  /* addv2sf3 */
    case 8:  /* adddf3 */
    case 7:  /* addsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 6:  /* *conditional_trapdi */
    case 5:  /* *conditional_trapsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 600:  /* *tls_get_tp_di_split */
    case 599:  /* *tls_get_tp_si_split */
    case 580:  /* hazard_nop */
    case 579:  /* nop */
    case 562:  /* update_got_version */
    case 561:  /* set_got_version */
    case 551:  /* mips_ehb */
    case 550:  /* mips_di */
    case 549:  /* mips_deret */
    case 548:  /* mips_eret */
    case 546:  /* *return */
    case 545:  /* blockage */
    case 401:  /* r10k_cache_barrier */
    case 399:  /* clear_hazard_di */
    case 398:  /* clear_hazard_si */
    case 394:  /* sync */
    case 387:  /* loadgp_blockage */
    case 4:  /* trap */
    case 3:  /* ls2_falu2_turn_enabled_insn */
    case 2:  /* ls2_falu1_turn_enabled_insn */
    case 1:  /* ls2_alu2_turn_enabled_insn */
    case 0:  /* ls2_alu1_turn_enabled_insn */
      break;

    }
}
