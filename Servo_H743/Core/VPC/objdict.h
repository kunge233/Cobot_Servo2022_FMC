#ifndef OBJDICT_H
#define OBJDICT_H

#include "servo.h"
#include <map>

static const std::map<int, void *> objdict{
    {0x200001, &servo.encoder.d_cnt},
    {0x200002, &servo.encoder.pos_relative},
    {0x200003, &servo.encoder.pos_absolute},
    {0x200004, &servo.encoder.lines},
    {0x200005, &servo.encoder.pole_pairs},
    {0x200006, &servo.encoder.theta},
    {0x200007, &servo.encoder.pos_zero},
    {0x200008, &servo.encoder.speed_cnt},
    {0x200009, &servo.encoder.speed_rpm},
    {0x20000a, &servo.encoder.speed_rpm_max},
    {0x20000b, &servo.encoder.speed},

    {0x200101, &servo.current.i_a},
    {0x200102, &servo.current.i_b},
    {0x200103, &servo.current.i_c},

    {0x200201, &servo.foc.u_d},
    {0x200202, &servo.foc.u_q},
    {0x200203, &servo.foc.theta},
    {0x200204, &servo.foc.u_alpha},
    {0x200205, &servo.foc.u_beta},
    {0x200206, &servo.foc.t_a},
    {0x200207, &servo.foc.t_b},
    {0x200208, &servo.foc.t_c},
    {0x200209, &servo.foc.i_a},
    {0x20020a, &servo.foc.i_b},
    {0x20020b, &servo.foc.i_alpha},
    {0x20020c, &servo.foc.i_beta},
    {0x20020d, &servo.foc.i_d},
    {0x20020e, &servo.foc.i_q},

    {0x201101, &servo.id_d},
    {0x201102, &servo.iq_d},
    {0x201103, &servo.speed_d},
    {0x201104, &servo.pos_d},
    {0x201105, &servo.pid_id.k_p},
    {0x201106, &servo.pid_id.k_i},
    {0x201108, &servo.pid_iq.k_p},
    {0x201109, &servo.pid_iq.k_i},
    {0x20110b, &servo.pid_speed.k_p},
    {0x20110c, &servo.pid_speed.k_i},
    {0x20110e, &servo.pid_pos.k_p},
    {0x201111, &servo.wave.wave_type},
    {0x201112, &servo.wave.amp},
    {0x201113, &servo.wave.freq},
    {0x201114, &servo.wave.offset},
    {0x201115, &servo.TL},
    {0x201116, &servo.iq_},
    {0x201117, &servo.pid_speed.saturation_flag},
    {0x201118, &servo.pid_speed.u_p},
    {0x201119, &servo.pid_speed.u_i},
    {0x2011a0, &servo.pid_speed.u},
    {0x2011a1, &servo.pid_speed.u_max},
    {0x2011a2, &servo.pid_pos.u_max},

    {0x201201, &servo.lqt_id.K_x},
    {0x201202, &servo.lqt_id.K_d},
    {0x201203, &servo.lqt_id.f},
    {0x201204, &servo.lqt_id.L},
    {0x201205, &servo.lqt_id.G_sigma},
    {0x201206, &servo.lqt_id.H_1_sigma},
    {0x201207, &servo.lqt_id.H_2_sigma},
    {0x201208, &servo.lqt_iq.K_x},
    {0x201209, &servo.lqt_iq.K_d},
    {0x20120a, &servo.lqt_iq.f},
    {0x20120b, &servo.lqt_iq.L},
    {0x20120c, &servo.lqt_iq.G_sigma},
    {0x20120d, &servo.lqt_iq.H_1_sigma},
    {0x20120e, &servo.lqt_iq.H_2_sigma},

    /* index 0x2031 :   Notch filter. */
    {0x203001, &servo.n_notch_filter},
    {0x203101, &servo.notch_filter[0].b_0},
    {0x203102, &servo.notch_filter[0].b_1},
    {0x203103, &servo.notch_filter[0].b_2},
    {0x203104, &servo.notch_filter[0].a_1},
    {0x203105, &servo.notch_filter[0].a_2},
    {0x203106, &servo.notch_filter[1].b_0},
    {0x203107, &servo.notch_filter[1].b_1},
    {0x203108, &servo.notch_filter[1].b_2},
    {0x203109, &servo.notch_filter[1].a_1},
    {0x20310a, &servo.notch_filter[1].a_2},
    {0x20310b, &servo.notch_filter[2].b_0},
    {0x20310c, &servo.notch_filter[2].b_1},
    {0x20310d, &servo.notch_filter[2].b_2},
    {0x20310e, &servo.notch_filter[2].a_1},
    {0x20310f, &servo.notch_filter[2].a_2},
    {0x203110, &servo.notch_filter[3].b_0},
    {0x203111, &servo.notch_filter[3].b_1},
    {0x203112, &servo.notch_filter[3].b_2},
    {0x203113, &servo.notch_filter[3].a_1},
    {0x203114, &servo.notch_filter[3].a_2},
    {0x203115, &servo.notch_filter[4].b_0},
    {0x203116, &servo.notch_filter[4].b_1},
    {0x203117, &servo.notch_filter[4].b_2},
    {0x203118, &servo.notch_filter[4].a_1},
    {0x203119, &servo.notch_filter[4].a_2},

    {0x50f001, &servo.sample.p1_index},
    {0x50f002, &servo.sample.p1_in},
    {0x50f003, &servo.sample.p1_out},
    {0x50f004, &servo.sample.p1_sampling_mode},
    {0x50f005, &servo.sample.p1_sampling_completed},
    {0x50f006, &servo.sample.p1_sampling_interval},
    {0x50f007, &servo.sample.p2_index},

    {0x606000, &servo.Modes_of_operation},
};

static inline int pTable(int index) {
  if (auto it = objdict.find(index); it != objdict.end()) {
    return *((int *)it->second);
  } else {
    return -1;
  }
}

#endif // OBJDICT_H
