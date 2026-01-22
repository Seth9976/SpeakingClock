// 函数: sub_49a328
// 地址: 0x49a328
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1[0x98].b = 0

if (*(arg1 + 0x261) == 0 && *(arg1 + 0x262) != 0 && *(arg1 + 0x25e) == 0)
    int32_t esi
    esi.w = 0xffb0
    sub_403e64(arg1, esi)

int32_t point
GetCursorPos(&point)
int32_t point_1
sub_457310(arg1, &point, &point_1)
point = point_1
BOOL result_1
BOOL result = result_1

if (arg1[0xaa] != 0)
    (*(*arg1 + 0x44))(point, result)
    RECT lprc
    result = PtInRect(&lprc)
    
    if (result == 0)
        *(arg1 + 0x25e) = 0
        sub_45c168(arg1)
        sub_45b338()
        (*(*arg1 + 0x15c))()
        result = (*(*arg1 + 0x190))()

if (*(arg1 + 0x292) == 0)
    return result

arg1[0xa5]
return arg1[0xa4]()
