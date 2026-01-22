// 函数: sub_49bac8
// 地址: 0x49bac8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

(*(*arg1 + 0x158))()

if ((arg1[7].b & 0x10) != 0 && (*(*arg1 + 0x160))() != 0 && *(arg1 + 0x29a) == 0)
    return sub_49a0f4(arg1)

int32_t esi
esi.w = 0xffb3
char eax_5 = sub_403e64(arg1, esi)
int32_t eax_7

if (eax_5 == 0 && *(arg1 + 0x262) != 0 && (arg1[7].b & 0x10) == 0)
    eax_7 = sub_49abcc(arg1)

RECT param1
int32_t* result

if (eax_5 == 0 && *(arg1 + 0x262) != 0 && (arg1[7].b & 0x10) == 0 && eax_7 == 0)
    esi.w = 0xffb0
    result = sub_403e64(arg1, esi)
else
    (*(*arg1 + 0x44))(&param1, zx.d(*(arg1 + 0x263)))
    void var_18
    void* var_44_1 = &var_18
    void* eax_11 = (*(*arg1 + 0x148))(var_44_1)
    result = sub_49681c(var_44_1, arg1[0x94], eax_11)

if (*(arg1 + 0x29a) == 0)
    return result

(*(*arg1 + 0x100))()

if (sub_49a970(arg1) == 0)
    (*(*arg1 + 0x100))(3, 8)
    return DrawFrameControl(sub_42c73c(arg1[0x94]), &param1)

int32_t eax_17 = sub_42c73c(arg1[0x94])
void var_38
return (*data_4ac200)(arg1[0xb0], eax_17, 3, 1, &var_38, 0)
