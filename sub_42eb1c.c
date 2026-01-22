// 函数: sub_42eb1c
// 地址: 0x42eb1c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = arg2
int32_t ecx

if (esi != 0 && sub_403df4(esi, &data_42a100) == 0)
    return sub_41a70c(ecx, esi)

int32_t edi_1 = 0
int32_t* eax_2 = arg1[0xa]

if (eax_2 != 0)
    edi_1 = eax_2[5]
    ecx, arg2 = sub_42fb74(eax_2)

if (esi == 0)
    arg2.b = 1
    arg1[0xa] = sub_403c38(ecx, arg2)
    arg1[0xb].b = 1
else
    arg1[0xa] = esi[0xa]
    arg1[0xb].b = esi[0xb].b

sub_42fb70(arg1[0xa])
int32_t eax_9 = (*(*arg1 + 0x24))()
int32_t eax_11

if (edi_1 != eax_9)
    eax_11 = (*(*arg1 + 0x24))()

if (edi_1 != eax_9 && eax_11 != 0)
    eax_11.b = 1
else
    eax_11 = 0

*(arg1 + 0x22) = eax_11.b
return (*(*arg1 + 0x10))()
