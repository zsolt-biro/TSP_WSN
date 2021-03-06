//
// Generated file, do not edit! Created by opp_msgc 4.2 from messages.msg.
//

#ifndef _MESSAGES_M_H_
#define _MESSAGES_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0402
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Class generated from <tt>messages.msg</tt> by opp_msgc.
 * <pre>
 * message myPosition {
 *     int srcNodeID;
 * 	int destinationNodeID;
 * 	int nodeID;
 * 	int x;
 * 	int y;
 * }
 * </pre>
 */
class myPosition : public ::cMessage
{
  protected:
    int srcNodeID_var;
    int destinationNodeID_var;
    int nodeID_var;
    int x_var;
    int y_var;

  private:
    void copy(const myPosition& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const myPosition&);

  public:
    myPosition(const char *name=NULL, int kind=0);
    myPosition(const myPosition& other);
    virtual ~myPosition();
    myPosition& operator=(const myPosition& other);
    virtual myPosition *dup() const {return new myPosition(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSrcNodeID() const;
    virtual void setSrcNodeID(int srcNodeID);
    virtual int getDestinationNodeID() const;
    virtual void setDestinationNodeID(int destinationNodeID);
    virtual int getNodeID() const;
    virtual void setNodeID(int nodeID);
    virtual int getX() const;
    virtual void setX(int x);
    virtual int getY() const;
    virtual void setY(int y);
};

inline void doPacking(cCommBuffer *b, myPosition& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, myPosition& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>messages.msg</tt> by opp_msgc.
 * <pre>
 * message ImYourMaster
 * {
 * 	int srcNodeID;
 * 	int destinationNodeID;
 * }
 * </pre>
 */
class ImYourMaster : public ::cMessage
{
  protected:
    int srcNodeID_var;
    int destinationNodeID_var;

  private:
    void copy(const ImYourMaster& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ImYourMaster&);

  public:
    ImYourMaster(const char *name=NULL, int kind=0);
    ImYourMaster(const ImYourMaster& other);
    virtual ~ImYourMaster();
    ImYourMaster& operator=(const ImYourMaster& other);
    virtual ImYourMaster *dup() const {return new ImYourMaster(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSrcNodeID() const;
    virtual void setSrcNodeID(int srcNodeID);
    virtual int getDestinationNodeID() const;
    virtual void setDestinationNodeID(int destinationNodeID);
};

inline void doPacking(cCommBuffer *b, ImYourMaster& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ImYourMaster& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>messages.msg</tt> by opp_msgc.
 * <pre>
 * message ImYourSlave
 * {
 * 	int srcNodeID;
 * 	int destinationNodeID;
 * }
 * </pre>
 */
class ImYourSlave : public ::cMessage
{
  protected:
    int srcNodeID_var;
    int destinationNodeID_var;

  private:
    void copy(const ImYourSlave& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ImYourSlave&);

  public:
    ImYourSlave(const char *name=NULL, int kind=0);
    ImYourSlave(const ImYourSlave& other);
    virtual ~ImYourSlave();
    ImYourSlave& operator=(const ImYourSlave& other);
    virtual ImYourSlave *dup() const {return new ImYourSlave(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSrcNodeID() const;
    virtual void setSrcNodeID(int srcNodeID);
    virtual int getDestinationNodeID() const;
    virtual void setDestinationNodeID(int destinationNodeID);
};

inline void doPacking(cCommBuffer *b, ImYourSlave& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ImYourSlave& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>messages.msg</tt> by opp_msgc.
 * <pre>
 * message SyncMsg
 * {
 * 	int srcNodeID;
 * 	int destinationNodeID;
 * }
 * </pre>
 */
class SyncMsg : public ::cMessage
{
  protected:
    int srcNodeID_var;
    int destinationNodeID_var;

  private:
    void copy(const SyncMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SyncMsg&);

  public:
    SyncMsg(const char *name=NULL, int kind=0);
    SyncMsg(const SyncMsg& other);
    virtual ~SyncMsg();
    SyncMsg& operator=(const SyncMsg& other);
    virtual SyncMsg *dup() const {return new SyncMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSrcNodeID() const;
    virtual void setSrcNodeID(int srcNodeID);
    virtual int getDestinationNodeID() const;
    virtual void setDestinationNodeID(int destinationNodeID);
};

inline void doPacking(cCommBuffer *b, SyncMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SyncMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>messages.msg</tt> by opp_msgc.
 * <pre>
 * message FollowUp
 * {
 * 	int srcNodeID;
 * 	simtime_t timeMoment;
 * 	int destinationNodeID;
 * }
 * </pre>
 */
class FollowUp : public ::cMessage
{
  protected:
    int srcNodeID_var;
    simtime_t timeMoment_var;
    int destinationNodeID_var;

  private:
    void copy(const FollowUp& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const FollowUp&);

  public:
    FollowUp(const char *name=NULL, int kind=0);
    FollowUp(const FollowUp& other);
    virtual ~FollowUp();
    FollowUp& operator=(const FollowUp& other);
    virtual FollowUp *dup() const {return new FollowUp(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSrcNodeID() const;
    virtual void setSrcNodeID(int srcNodeID);
    virtual simtime_t getTimeMoment() const;
    virtual void setTimeMoment(simtime_t timeMoment);
    virtual int getDestinationNodeID() const;
    virtual void setDestinationNodeID(int destinationNodeID);
};

inline void doPacking(cCommBuffer *b, FollowUp& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, FollowUp& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>messages.msg</tt> by opp_msgc.
 * <pre>
 * message DelayReq
 * {
 * 	int srcNodeID;
 * 	int destinationNodeID;
 * }
 * </pre>
 */
class DelayReq : public ::cMessage
{
  protected:
    int srcNodeID_var;
    int destinationNodeID_var;

  private:
    void copy(const DelayReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DelayReq&);

  public:
    DelayReq(const char *name=NULL, int kind=0);
    DelayReq(const DelayReq& other);
    virtual ~DelayReq();
    DelayReq& operator=(const DelayReq& other);
    virtual DelayReq *dup() const {return new DelayReq(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSrcNodeID() const;
    virtual void setSrcNodeID(int srcNodeID);
    virtual int getDestinationNodeID() const;
    virtual void setDestinationNodeID(int destinationNodeID);
};

inline void doPacking(cCommBuffer *b, DelayReq& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, DelayReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>messages.msg</tt> by opp_msgc.
 * <pre>
 * message DelayResp
 * {
 * 	int srcNodeID;
 * 	int destinationNodeID;
 * 	simtime_t timeMoment;
 * }
 * </pre>
 */
class DelayResp : public ::cMessage
{
  protected:
    int srcNodeID_var;
    int destinationNodeID_var;
    simtime_t timeMoment_var;

  private:
    void copy(const DelayResp& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DelayResp&);

  public:
    DelayResp(const char *name=NULL, int kind=0);
    DelayResp(const DelayResp& other);
    virtual ~DelayResp();
    DelayResp& operator=(const DelayResp& other);
    virtual DelayResp *dup() const {return new DelayResp(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSrcNodeID() const;
    virtual void setSrcNodeID(int srcNodeID);
    virtual int getDestinationNodeID() const;
    virtual void setDestinationNodeID(int destinationNodeID);
    virtual simtime_t getTimeMoment() const;
    virtual void setTimeMoment(simtime_t timeMoment);
};

inline void doPacking(cCommBuffer *b, DelayResp& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, DelayResp& obj) {obj.parsimUnpack(b);}


#endif // _MESSAGES_M_H_
