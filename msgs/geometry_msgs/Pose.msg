#pragma once
#include "EulerAngleZYX.msg"
#include "Header.msg"
#include "Position.msg"
#include "Quaternion.msg"

namespace msgs {

struct Pose {

  Header header;

  Position point;

  EulerAngleZYZ orientation_euler;

  Quaternion orientation_quat;
};

} // namespace msgs