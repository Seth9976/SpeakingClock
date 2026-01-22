// 函数: sub_40337c
// 地址: 0x40337c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
int16_t x87status_1
int16_t temp0_1
temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
int16_t x87control
int16_t x87status_2
x87control, x87status_2 = __fldcw_memmem16(temp0_1 | 0xf00)
int16_t x87control_1
int16_t x87status_3
x87control_1, x87status_3 = __fldcw_memmem16(temp0)
return int.q(arg2).d
