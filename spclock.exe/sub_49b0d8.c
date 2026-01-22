// 函数: sub_49b0d8
// 地址: 0x49b0d8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_60 = arg5
uint32_t var_64 = zx.d(arg4)
char var_9 = 0

if ((arg3[7].b & 1) == 0 && (arg3[7].b & 8) == 0 && (*(*arg3 + 0x178))() != 0)
    int32_t var_30 = arg3[0x10]
    int32_t var_2c_1 = arg3[0x11]
    void var_40
    sub_418a3c(0, 0, &var_40)
    (*(*arg3 + 0x188))()
    int32_t var_38
    var_30 = var_38
    int32_t eax_11 = sub_457190(arg3)
    int32_t var_34
    int32_t eax_14 = arg3[0x13] + var_34 - (arg3[0x13] - eax_11)
    int32_t eax_16 = sub_45714c(arg3)
    sub_418a3c(arg3[0x12] + var_30 - (arg3[0x12] - eax_16), eax_14, &var_38)
    int32_t var_24 = var_34
    int32_t var_20 = *arg1
    RECT* var_1c
    int32_t* edi_2 = &var_1c
    void* esi_1 = &arg1[1]
    *edi_2 = *esi_1
    void* edi_3 = &edi_2[1]
    void* esi_2 = esi_1 + 4
    *edi_3 = *esi_2
    *(edi_3 + 4) = *(esi_2 + 4)
    int32_t dy = arg5[1] + var_34
    int32_t dx = *arg5 + var_30
    int32_t* lprc = &var_20
    OffsetRect(lprc, dx, dy)
    (*(*arg3 + 0x13c))()
    sub_42c124(sub_430bec((*(*arg3 + 0x178))(&var_20)), arg1, arg2)
    var_9 = 1

return zx.d(var_9)
