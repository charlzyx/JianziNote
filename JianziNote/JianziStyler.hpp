#pragma once

#include "JianziDefines.hpp"
#include "Point.hpp"
#include <vector>

namespace qin
{
class JianziStyler
{
public:
    enum class PathKey
    {
        Close,  // 闭合
        MoveTo, // 移动
        LineTo, // 直线
        // ConicTo,
        QuadTo,  // 二次曲线
        CubicTo, // 三次曲线
    };
    struct PathData
    {
        PathKey key = PathKey::Close;
        std::vector<Point2f> pts;
    };

    virtual std::vector<PathData> RenderPath(const std::vector<Stroke> &strokes) const = 0;
    virtual float GetStrokeWidth() const = 0;
};
} // namespace qin