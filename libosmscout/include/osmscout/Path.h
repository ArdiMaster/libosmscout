#ifndef OSMSCOUT_PATH_H
#define OSMSCOUT_PATH_H

/*
  This source is part of the libosmscout library
  Copyright (C) 2012  Tim Teulings

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
*/

#include <osmscout/private/CoreImportExport.h>

#include <osmscout/Types.h>

namespace osmscout {

  /**
   * A path is defined by the way to be used and the node id of a node on this way
   * which is the target to reach.
   */
  class OSMSCOUT_API Path
  {
  private:
    FileOffset wayOffset;
    Id         targetNodeId;
    bool       traversable;

  public:
    Path(FileOffset wayOffset,
         Id targetNodeId);
    Path(FileOffset wayOffset,
         Id targetNodeId,
         bool traversable);
    Path(const Path& other);
    virtual ~Path();

    inline FileOffset GetWayOffset() const
    {
      return wayOffset;
    }

    inline Id GetTargetNodeId() const
    {
      return targetNodeId;
    }

    inline bool IsTraversable() const
    {
      return traversable;
    }
  };
}

#endif
